#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QStyle>
#include <QPixmap>
#include "dish.h"

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
    timer_dish = new QTimer(this);
    timer_face = new QTimer(this);
    //image = new QImage();

    connect(timer_dish,SIGNAL(timeout()),this,SLOT(readDishFrame()));
    connect(timer_face,SIGNAL(timeout()),this,SLOT(readFaceFrame()));
    connect(ui->dcOpenBt,SIGNAL(clicked()),this,SLOT(openDishCamara()));
    connect(ui->dcPhotoBt,SIGNAL(clicked()),this,SLOT(takeDishPhoto()));
    connect(ui->dcCloseBt,SIGNAL(clicked()),this,SLOT(closeDishCamara()));
    connect(ui->fcOpenBt,SIGNAL(clicked()),this,SLOT(openFaceCamara()));
    connect(ui->fcPhotoBt,SIGNAL(clicked()),this,SLOT(takeFacePhoto()));
    connect(ui->fcCloseBt,SIGNAL(clicked()),this,SLOT(closeFaceCamara()));

    openDishCamara();
    ui->dishLdImg->setVisible(false);
    ui->faceLdImg->setVisible(false);
}

Widget::~Widget()
{
//    camera.stop();
//    closeCamara();
    delete ui;
}


void Widget::on_dishRgBt_clicked()
{
    //qDebug("on_dishRgBt_clicked");image: url(:/pic/logo.png);
}


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


void Widget::on_dishRgBt_released()
{
    ui->dishLdImg->setVisible(false);
    ui->statusLb->setText("Recognized Successfully!");
    ui->statusLb->setStyleSheet("background-color: rgb(111, 237, 92);");
    ui->statusLb->setFixedWidth(300);
    //ui->dishRgBt->setStyleSheet("image: url(:/pic/dish_demo_rc.png);");
    ui->dishRgBt->setText("Dishes recognized");
    takeDishPhoto();

    // get order list
    dish dishes;
    //QString* order_name = new QString[5];
    //order_name = dishes.getOrders_name(5);
    double* order_prc = new double;
    order_prc = dishes.getOrders_prc(5);
    //double p = 2.34;
    //QString strp = QString::number(p);
    // show order table
    ui->orderTb->setRowCount(5);
    ui->orderTb->setItem(0, 0, new QTableWidgetItem("AAA"));
    ui->orderTb->setItem(0, 1, new QTableWidgetItem(QString::number(1)));
    ui->orderTb->setItem(0, 2, new QTableWidgetItem(QString::number(order_prc[0])));

    ui->orderTb->setItem(1, 0, new QTableWidgetItem("BBB"));
    ui->orderTb->setItem(1, 1, new QTableWidgetItem(QString::number(1)));
    ui->orderTb->setItem(1, 2, new QTableWidgetItem(QString::number(order_prc[1])));

    ui->orderTb->setItem(2, 0, new QTableWidgetItem("CCC"));
    ui->orderTb->setItem(2, 1, new QTableWidgetItem(QString::number(1)));
    ui->orderTb->setItem(2, 2, new QTableWidgetItem(QString::number(order_prc[2])));

    ui->orderTb->setItem(3, 0, new QTableWidgetItem("DDD"));
    ui->orderTb->setItem(3, 1, new QTableWidgetItem(QString::number(2)));
    ui->orderTb->setItem(3, 2, new QTableWidgetItem(QString::number(order_prc[3])));

    ui->orderTb->setItem(4, 0, new QTableWidgetItem("EEE"));
    ui->orderTb->setItem(4, 1, new QTableWidgetItem(QString::number(1)));
    ui->orderTb->setItem(4, 2, new QTableWidgetItem(QString::number(order_prc[4])));

    ui->orderTb->show();

    openFaceCamara();
}


void Widget::on_faceRgBt_clicked()
{
    //qDebug("on_faceRgBt_clicked");image: url(:/pic/logo.png);
}


void Widget::on_faceRgBt_pressed()
{
    ui->statusHd->setText("  Recognizing...");
    ui->statusHd->setStyleSheet("background-color: rgb(0, 162, 232);");
    ui->faceRgBt->setText("Recording face");
    ui->faceLdImg->setVisible(true);
}


void Widget::on_faceRgBt_released()
{
    ui->faceLdImg->setVisible(false);
    ui->statusHd->setText("  Paying");
    ui->statusHd->setStyleSheet("background-color: rgb(111, 237, 92);");
    ui->faceRgBt->setText("Face recognized");
    takeFacePhoto();
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

// Mat transfer to QImage
QImage Widget::MatImageToQt(const Mat &src)
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
