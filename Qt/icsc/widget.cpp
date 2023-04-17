#include "widget.h"
#include "ui_widget.h"
#include "facerecognizer.h"


#include <QString>
#include <QStyle>
#include <QPixmap>
#include <QDebug>
#include <QProcess>
#include <QDir>
#include <QTime>
#include <qfile.h>
#include <qtextstream.h>

//#define camerawidth 1280
//#define cameraheight 720


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // initialize empty order table
    ui->orderTb->setColumnCount(3);
    ui->orderTb->setColumnWidth(0, 250);
    QStringList header;
    header<<"dish"<<"amount"<<"price";
    ui->orderTb->setHorizontalHeaderLabels(header);

    //    //bp opencv
    //    myCallback.window = this;
    //    camera.registerSceneCallback(&myCallback);

    //    // set up the thermometer
    //    thermo = new QwtThermo;
    //    thermo->setFillBrush( QBrush(Qt::red) );
    //    thermo->setScale(0, 255);
    //    thermo->show();

    //    image = new QLabel;

    //    // plot to the left of button and thermometer
    //    hLayout = new QHBoxLayout();
    //    hLayout->addWidget(thermo);
    //    hLayout->addWidget(image);

    //    setLayout(hLayout);
    //    camera.start();

    // set current time
    cur_timer = new QTimer(this);
    // set restart interval time
    restart_timer.setInterval(3000);   // 3 sec
    timer_dish = new QTimer(this);
    timer_face = new QTimer(this);
    //image = new QImage();

    connect(cur_timer,SIGNAL(timeout()),this,SLOT(timerUpdata()));
    cur_timer->start(1000);
    connect(&restart_timer,SIGNAL(timeout()),this,SLOT(restart_window()));
    connect(timer_dish,SIGNAL(timeout()),this,SLOT(readDishFrame()));
    connect(timer_face,SIGNAL(timeout()),this,SLOT(readFaceFrame()));

    openDishCamara();
    ui->dishLdImg->setVisible(false);
    ui->faceLdImg->setVisible(false);
    ui->tPLb->setVisible(false);
    ui->priceLb->setVisible(false);
    ui->statusHd->setVisible(false);
    ui->statusHd_2->setVisible(false);
    ui->textBrowser->setVisible(false);
    ui->numLb->setVisible(false);
    ui->nameLb->setVisible(false);
    ui->mnyLb->setVisible(false);
    ui->endText->setVisible(false);
    ui->failText->setVisible(false);
}

Widget::~Widget()
{
    //    camera.stop();
    //    closeCamara();
    delete ui;
}



// 显示当前时间
void Widget::timerUpdata()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm");
    ui->curTime->setText(str);
}



// 关闭窗口
void Widget::reboot()
{
    QString program = QApplication::applicationFilePath();
    QStringList arguments = QApplication::arguments();
    QString workingDirectory = QDir::currentPath();
    QProcess::startDetached(program, arguments, workingDirectory);
    QApplication::exit();
}

// 重新打开窗口
void Widget::restart_window()
{
    qDebug()<<"time out";
    restart_timer.stop();
    qApp->processEvents();
    reboot();
}



// 读取菜品数据库
QStringList read_dish_database()
{
    QFile inFile("dish_database.csv");
    QStringList lines;

    if (inFile.open(QIODevice::ReadOnly))
    {
        QTextStream stream_text(&inFile);
        while (!stream_text.atEnd())
        {
            lines.push_back(stream_text.readLine());
        }
        inFile.close();
        return lines;
    }
    else
    {
        qDebug()<<"dish database read error!";
        return lines;
    }
}



// Mat transfer to QImage 图像对象类型转换
QImage MatImageToQt(const Mat &src)
{
    //CV_8UC1 8位无符号的单通道---灰度图片
    if(src.type() == CV_8UC1)
    {
        //使用给定的大小和格式构造图像
        //QImage(int width, int height, Format format)
        QImage qImage(src.cols,src.rows,QImage::Format_Indexed8);
        //扩展颜色表的颜色数目
        qImage.setColorCount(256);

        //在给定的索引设置颜色
        for(int i = 0; i < 256; i ++)
        {
            //得到一个黑白图
            qImage.setColor(i,qRgb(i,i,i));
        }
        //复制输入图像,data数据段的首地址
        uchar *pSrc = src.data;
        //
        for(int row = 0; row < src.rows; row ++)
        {
            //遍历像素指针
            uchar *pDest = qImage.scanLine(row);
            //从源src所指的内存地址的起始位置开始拷贝n个
            //字节到目标dest所指的内存地址的起始位置中
            memcmp(pDest,pSrc,src.cols);
            //图像层像素地址
            pSrc += src.step;
        }
        return qImage;
    }
    //为3通道的彩色图片
    else if(src.type() == CV_8UC3)
    {
        //得到图像的的首地址
        const uchar *pSrc = (const uchar*)src.data;
        //以src构造图片
        QImage qImage(pSrc,src.cols,src.rows,src.step,QImage::Format_RGB888);
        //在不改变实际图像数据的条件下，交换红蓝通道
        return qImage.rgbSwapped();
    }
    //四通道图片，带Alpha通道的RGB彩色图像
    else if(src.type() == CV_8UC4)
    {
        const uchar *pSrc = (const uchar*)src.data;
        QImage qImage(pSrc, src.cols, src.rows, src.step, QImage::Format_ARGB32);
        //返回图像的子区域作为一个新图像
        return qImage.copy();
    }
    else
    {
        return QImage();
    }
}




// 菜品识别临时触发按钮 被点击时
void Widget::on_dishRgBt_clicked()
{
    //qDebug("on_dishRgBt_clicked");image: url(:/pic/logo.png);
}

// 菜品识别临时触发按钮按下时
void Widget::on_dishRgBt_pressed()
{
    ui->statusLb->setText("Recognizing...");
    ui->statusLb->setStyleSheet("background-color: rgb(0, 162, 232);");
    ui->statusLb->setFixedWidth(240);
    //ui->dishRgBt->setStyleSheet("image: url(:/pic/dish_demo.png);");image: url(:/pic/logo.png);
    ui->dishRgBt->setText("Show dishes");
    //ui->dishRgP>setPixmap(QPixmap(":/pic/dish_demo.png"));
    ui->dishLdImg->setVisible(true);
}

// 菜品识别临时触发按钮释放时
void Widget::on_dishRgBt_released()
{
    ui->dishLdImg->setVisible(false);
    ui->statusLb->setText("Recognized Successfully!");
    ui->statusLb->setStyleSheet("background-color: rgb(111, 237, 92);");
    ui->statusLb->setFixedWidth(300);
    ui->dishRgBt->setText("Dishes recognized");
    takeDishPhoto();   // 定格菜品摄像头显示画面

    // get order list
    int dishNum = 6;  // will from dish recognition
    int *dishes_recognized = new int[dishNum]{ 0,71,3,15,28 };  // will from dish recognition
    show_order(dishes_recognized, dishNum);
    delete []dishes_recognized;

    // open the face camera to recognize and make payment
    ui->statusHd->setText(" Recognizing...");
    ui->statusHd->setStyleSheet("background-color: rgb(0, 162, 232);");
    ui->statusHd->setVisible(true);
    //ui->faceLdImg->setVisible(true);
    openFaceCamara();
    int UsrIdx = faceRecognize();  // will from dish recognition: faceRecognize()
    if (UsrIdx == -1)
    {
        qDebug()<<"recognize fail!";
    }
    else
    {
        qDebug()<<"recognized!";
        //ui->faceLdImg->setVisible(false);
        ui->statusHd->setText(" Face recognized!");
        ui->statusHd->setStyleSheet("background-color: rgb(111, 237, 92);");
        //takeFacePhoto();
    }

    // use UsrIdx to find the account info
    ui->textBrowser->setVisible(true);
    ui->statusHd_2->setText(" Making the payment...");
    ui->statusHd_2->setStyleSheet("background-color: rgb(0, 162, 232);");
    ui->statusHd_2->setVisible(true);
    if (make_payment(UsrIdx))
        restart_timer.start();   // if the payment is successful, refrash the window after a few seconds
}

//opencv
//void Widget::updateImage(const cv::Mat &mat) {
//    const QImage frame(mat.data, mat.cols, mat.rows, mat.step,
//                       QImage::Format_RGB888);
//    image->setPixmap(QPixmap::fromImage(frame));
//    const int h = frame.height();
//    const int w = frame.width();
//    const QColor c = frame.pixelColor(w/2, h/2);
//    thermo->setValue(c.lightness());
//}




// 菜品识别摄像头
// read camera frame
void Widget::readDishFrame()
{
    cap.read(src_image);
    QImage imag = MatImageToQt(src_image);
    ui->dcView->setPixmap(QPixmap::fromImage(imag));
    //    ui->label_camera->setPixmap(QPixmap::fromImage(imag.mirrored(true,false)));   //水平镜像
}

void Widget::openDishCamara()
{
    // 本机摄像头
    cap.open(0);
    // rtsp流，如果是本地rtsp流，需要将本机ip地址与设备ip地址设置为同一网段
    //cap.open("rtsp://admin:1234567@192.168.1.1/xx0/yyy0");
    // 本机的视频文件
    //cap.open("D:\\Album\\test.mp4");
    timer_dish->start(50);
}

// take photo and freeze the frame
void Widget::takeDishPhoto()
{
    //cap.read(src_image);
    //QImage imag = MatImageToQt(src_image);
    //ui->cameraView->setPixmap(QPixmap::fromImage(imag));
    //ui->label_image->setPixmap(QPixmap::fromImage(imag.mirrored(true,false)));
    timer_dish->stop();
    cap.release();
}

// close camera
void Widget::closeDishCamara()
{
    // 停止读取数据。
    timer_dish->stop();
    cap.release();
    ui->dcView->clear();
}

// 人脸识别摄像头
// read camera frame
void Widget::readFaceFrame()
{
    cap.read(src_image);
    QImage imag = MatImageToQt(src_image);
    ui->fcView->setPixmap(QPixmap::fromImage(imag));
    //    ui->label_camera->setPixmap(QPixmap::fromImage(imag.mirrored(true,false)));   //水平镜像
}

void Widget::openFaceCamara()
{
    // 本机摄像头
    cap.open(0);
    // rtsp流，如果是本地rtsp流，需要将本机ip地址与设备ip地址设置为同一网段
    //cap.open("rtsp://admin:1234567@192.168.1.1/xx0/yyy0");
    // 本机的视频文件
    //cap.open("D:\\Album\\test.mp4");
    timer_face->start(50);
}

// take photo and freeze the frame
void Widget::takeFacePhoto()
{
    //cap.read(src_image);
    //QImage imag = MatImageToQt(src_image);
    //ui->cameraView->setPixmap(QPixmap::fromImage(imag));
    //ui->label_image->setPixmap(QPixmap::fromImage(imag.mirrored(true,false)));
    timer_face->stop();
    cap.release();
}

// close camera
void Widget::closeFaceCamara()
{
    // 停止读取数据。
    timer_face->stop();
    cap.release();
    ui->fcView->clear();
}



// 界面显示菜品列表，包括菜品名称、价格、数量
void Widget::show_order(int* dishes_recognized, int dishNum)
{
    // total price var
    total_price = 0;

    // get dish database
    QStringList lines;
    lines = read_dish_database();

    // show order table and calculate total price
    ui->orderTb->setRowCount(dishNum);
    for (int i = 0; i < dishNum; i++)
    {
        QString line = lines.at(dishes_recognized[i]);
        QStringList split = line.split(",");  // col
        QString name = split.at(0);
        QString price = split.at(1);
        double price_n = price.toDouble();
        total_price += price_n;

        ui->orderTb->setItem(i, 0, new QTableWidgetItem(name));
        ui->orderTb->setItem(i, 1, new QTableWidgetItem(QString::number(1)));
        ui->orderTb->setItem(i, 2, new QTableWidgetItem(price));
    }
    ui->orderTb->show();
    ui->priceLb->setText(QString::number(total_price));
    ui->tPLb->setVisible(true);
    ui->priceLb->setVisible(true);

}

// 读取账户数据库并扣款
bool Widget::make_payment(int UsrIdx)
{
    QFile inFile("account_database.csv");
    QStringList lines;

    if (inFile.open(QIODevice::ReadOnly))
    {
        qDebug()<<"reading account_database";
        QTextStream stream_text(&inFile);
        while (!stream_text.atEnd())
        {
            lines.push_back(stream_text.readLine());
        }
        inFile.close();
        QString line = lines.at(UsrIdx);
        QStringList split = line.split(",");  // col
        QString name = split.at(0);
        QString accNum = split.at(1);
        double balance = (split.at(2)).toDouble();
        double new_balance = balance - total_price;
        ui->numLb->setText(accNum);
        ui->nameLb->setText(name);
        ui->mnyLb->setText(QString::number(balance));
        ui->numLb->setVisible(true);
        ui->nameLb->setVisible(true);
        ui->mnyLb->setVisible(true);
        if (new_balance < 0)
        {
            qDebug()<<"Insufficient balance!";
            ui->statusHd_2->setText(" Insufficient balance!");
            ui->statusHd_2->setStyleSheet("background-color: rgb(237, 69, 72);");
            ui->failText->setVisible(true);
            return false;
        }
        ui->mnyLb->setText(QString::number(new_balance));
        ui->statusHd_2->setText(" Payment successful!");
        ui->statusHd_2->setStyleSheet("background-color: rgb(111, 237, 92);");

        // update the balance info
        QFile outFile("account_database.csv");
        if (outFile.open(QIODevice::WriteOnly))
        {
            QString endl = "\n";
            for (int i = 0; i < lines.size(); i++)
            {
                if (UsrIdx == i)
                {
                    QString new_line = name + "," + accNum + "," + QString::number(new_balance);
                    outFile.write(new_line.toStdString().c_str()); // write the new line
                }
                else
                    outFile.write(lines[i].toStdString().c_str());

                outFile.write(endl.toStdString().c_str());
            }
            outFile.close();
            qDebug()<<"balance writen!";
        }
        else {
            qDebug()<<"balance write error!";
        }
    }
    else
    {
        qDebug()<<"account database read error!";
    }
    ui->endText->setVisible(true);
    return true;
}
