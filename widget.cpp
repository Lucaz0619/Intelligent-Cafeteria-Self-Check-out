#include "widget.h"
#include <fstream>
#include <QString>
#include <QStyle>
#include <QPixmap>
#include <QDebug>
#include <QProcess>
#include <QDir>
#include <QTime>
#include <qfile.h>
#include <qtextstream.h>
#include "yolov5_lite_s/yolov5_lite_s.h"

//#define camerawidth 1280
//#define cameraheight 720

QLabel *Widget::faceDisplay;
QLabel *Widget::dishDisplay;
cv::Mat Widget::dish_image;
cv::Mat Widget::face_image;
cv::Mat Widget::dst_image;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    qRegisterMetaType<cv::Mat>("cv::Mat");
    // set current time
    cur_timer = new QTimer(this);
    // set restart interval time
    restart_timer.setInterval(5000);   // 5 sec

    dishDisplay = new QLabel(this);
    dishDisplay->setObjectName(QString::fromUtf8("dishDisplay"));
    dishDisplay->setGeometry(QRect(0, 210, 731, 541));
    dishDisplay->setAlignment(Qt::AlignCenter);

    faceDisplay = new QLabel(this);
    faceDisplay->setObjectName(QString::fromUtf8("faceDisplay"));
    faceDisplay->setGeometry(QRect(740, 460, 281, 331));
    faceDisplay->setAlignment(Qt::AlignCenter);

    connect(cur_timer,SIGNAL(timeout()),this,SLOT(timerUpdata()));
    cur_timer->start(1000);
    connect(&restart_timer,SIGNAL(timeout()),this,SLOT(restart_window()));


    openDishCamera();
}

Widget::~Widget()
{
    //    camera.stop();
    //    closeCamara();
    delete ui;
}

void Widget::timerUpdata()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm");
    ui->curTime->setText(str);
}

void Widget::reboot()
{
    QString program = QApplication::applicationFilePath();
    QStringList arguments = QApplication::arguments();
    QString workingDirectory = QDir::currentPath();
    QProcess::startDetached(program, arguments, workingDirectory);
    QApplication::exit();
}

void Widget::restart_window()
{
    qDebug()<<"Restarting...";
    restart_timer.stop();
    qApp->processEvents();
    reboot();
}

QStringList read_dish_database()
{
    QFile inFile("/home/weijian/MyProjects/EmbeddedProjects/Intelligent-Cafeteria-Self-Check-out/dish_database.csv");
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

// dish Mat transfer to QImage
void Widget::dishMatImageToQt(const cv::Mat &frame)
{
    dish_image = frame;
    QImage imag = QImage((const unsigned char*)(dish_image.data), dish_image.cols, dish_image.rows, QImage::Format_RGB888);
    imag = imag.rgbSwapped();
    QPixmap p = QPixmap::fromImage(imag);
    dishDisplay->setPixmap(p); //dishDisplay is the label name of the dish ui

}

void Widget::faceMatImageToQt(const cv::Mat &frame)
{
    face_image = frame;
    QImage imag = QImage((const unsigned char*)(face_image.data), face_image.cols, face_image.rows, QImage::Format_RGB888);
    imag = imag.rgbSwapped();
    QPixmap q = QPixmap::fromImage(imag);
    faceDisplay->setPixmap(q); //faceDisplay is the label name of the face ui

}

void Widget::showDishResult()
{
    QImage qImg(dst_image.data, dst_image.cols, dst_image.rows, static_cast<int>(dst_image.step), QImage::Format_RGB888);
    qImg = qImg.rgbSwapped();
    QPixmap r = QPixmap::fromImage(qImg);
    dishDisplay->setPixmap(r);
}

void Widget::showFaceResult()
{
    QImage qImg(dst_image.data, dst_image.cols, dst_image.rows, static_cast<int>(dst_image.step), QImage::Format_RGB888);
    qImg = qImg.rgbSwapped();
    QPixmap s = QPixmap::fromImage(qImg);
    faceDisplay->setPixmap(s);
}

void Widget::openDishCamera(){
    cam = new CameraDriver(0);
    cam -> startCapture();
    cam -> processFrame(dishMatImageToQt);
}

void Widget::closeDishCamera(){
    cam -> stopped();
    dishDisplay->clear();
}

void Widget::openFaceCamera(){
    cam2 = new CameraDriver(1);
    cam2 -> startCapture();
    cam2 -> processFrame(faceMatImageToQt);
}

void Widget::closeFaceCamera(){
    cam2 -> stopped();
    faceDisplay->clear();

}

//Click button to start the recognition process
void Widget::on_button_pressed()
{
    ui->statusLb->setText("Recognizing...");
    ui->statusLb->setStyleSheet("background-color: rgb(0, 162, 232);");
    ui->statusLb->setFixedWidth(240);
    ui->statusLb->setVisible(true);
    //ui->button->setText("Showing dishes");
    
}

void Widget::on_button_released()
{
    ui->statusLb->setText("Recognized Successfully!");
    ui->statusLb->setStyleSheet("background-color: rgb(111, 237, 92);");
    ui->statusLb->setFixedWidth(240);
    ui->statusLb->setText("Dishes recognized!");
    ui->statusLb->setFixedWidth(320);
    ui->statusLb->setAlignment(Qt::AlignCenter);

    dishRecognizer(); //recognize dishes

    ui->statusHd->setText(" Recognizing...");
    ui->statusHd->setStyleSheet("background-color: rgb(0, 162, 232);");
    ui->statusHd->setVisible(true);
    
    face_image = dish_image;
    
    openFaceCamera();//the second camera can also actually be initialized at the beginning of the program
    int Idx = faceRecognizer();  
    //int Idx = 1;//test code output when the second camera is not plugged in
    if (Idx == -1)
    {
        qDebug()<<"recognization failed!";
    }
    else
    {
        qDebug()<<"recognized!";
        ui->statusHd->setText(" Face recognized!");
        ui->statusHd->setStyleSheet("background-color: rgb(111, 237, 92);");
    }

    // use Idx to find the account info
    ui->textBrowser->setVisible(true);
    ui->statusHd_2->setText(" Making the payment...");
    ui->statusHd_2->setStyleSheet("background-color: rgb(0, 162, 232);");
    ui->statusHd_2->setVisible(true);
    if (make_payment(Idx))
    {
        closeFaceCamera(); 
        showFaceResult();
        restart_timer.start();   // if the payment is successful, refrash the window after a few seconds
    }
}

void Widget::dishRecognizer()
{
    int dishNum = 0;
    int *dishes_recognized;
    while(dishNum < 2)
    {
        m = dish_image;
        cv::Mat resultImage;
        qDebug()<<"read the dish frame";
        std::vector<Object> objects;
        detect_yolov5(m, objects);
        draw_objects(m, objects, &dst_image);

        std::vector<int> labels;
        for (auto& obj : objects)
        {
            labels.push_back(obj.label);
        }
        dishes_recognized = new int[labels.size()];
        for (size_t i = 0; i < labels.size(); ++i)
        {
            dishes_recognized[i] = labels[i];
        }
        dishNum = labels.size();
    }

    show_order(dishes_recognized, dishNum);
    delete []dishes_recognized;

    closeDishCamera();
    showDishResult();

}

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

bool Widget::make_payment(int Idx)
{
    QFile inFile("/home/weijian/MyProjects/EmbeddedProjects/Intelligent-Cafeteria-Self-Check-out/account_database.csv");
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
        QString line = lines.at(Idx);
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
        QFile outFile("/home/weijian/MyProjects/EmbeddedProjects/Intelligent-Cafeteria-Self-Check-out/account_database.csv");
        if (outFile.open(QIODevice::WriteOnly))
        {
            QString endl = "\n";
            for (int i = 0; i < lines.size(); i++)
            {
                if (Idx == i)
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

int Widget::faceRecognizer()
{
    int UsrIdx = -1;
    int predicted = -1;

    map<int, string> labels;
    ifstream infile("./recognizer/labels.txt");
    int a;
    string b;
    while (infile >> a >> b)
    {
        labels[a] = b;
    }

    CascadeClassifier classifier;
    classifier.load("/home/weijian/MyProjects/EmbeddedProjects/Intelligent-Cafeteria-Self-Check-out/face_recognition/cascades/lbpcascade_frontalface.xml");
    Ptr<LBPHFaceRecognizer> recognizer =  LBPHFaceRecognizer::create();
    recognizer->read("/home/weijian/MyProjects/EmbeddedProjects/Intelligent-Cafeteria-Self-Check-out/face_recognition/recognizer/embeddings.xml");

    Mat windowFrame;
    int numframes = 0;
    time_t timer_begin, timer_end;
    time ( &timer_begin );
    double confidence = 0.0;

    while(UsrIdx == -1 && confidence < 45)
    {
        cv::Mat frame = face_image;
        cvtColor(frame, windowFrame, cv::COLOR_BGR2GRAY);
        vector<Rect> faces;
        classifier.detectMultiScale(frame, faces, 1.2, 5);
        for (int i = 0; i < faces.size(); i++)
        {
            rectangle(frame, faces[i], Scalar(0, 255, 0));
            Mat face = windowFrame(faces[i]);
            predicted = recognizer->predict(face);
            recognizer->predict(face, predicted, confidence);
            if(labels.find(predicted) == labels.end() || confidence < 45)
            {
                putText(frame, "Unknown", Point(faces[i].x ,faces[i].y - 5), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,0), 1);
            }
            else
            {
                UsrIdx = predicted;
                cout << "Face:" << labels[predicted] << endl;
                putText(frame, labels[predicted], Point(faces[i].x ,faces[i].y - 5), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,0), 1);
            }
            cout << "ID: " << predicted << " | Confidence: " << confidence << endl;
            UsrIdx = predicted;
        }
        UsrIdx = predicted;
        cout << UsrIdx << "asdasad"<< endl;
        //imshow("edges", frame);
        dst_image = frame.clone();
        if (waitKey(30) >= 0)
            break;
    }

    time ( &timer_end );
    double secondsElapsed = difftime(timer_end, timer_begin);
    qDebug()<<QString::number(secondsElapsed);
    return UsrIdx;
}