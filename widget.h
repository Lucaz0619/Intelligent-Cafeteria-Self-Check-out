#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QImage>
#include <QTimer>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/face.hpp>
#include "ui.h"
#include "cameraDriver/cameraDriver.h"

using namespace std;
using namespace cv;
using namespace cv::face;

//QT_BEGIN_NAMESPACE
//namespace Ui { class Widget; }
//QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void reboot();

    void openDishCamera();
    void closeDishCamera();

    void openFaceCamera();
    void closeFaceCamera();

    static void dishMatImageToQt(const cv::Mat &frame);
    static void faceMatImageToQt(const cv::Mat &frame);
    static void showResult();

    void show_order(int* dishes_recognized, int dishNum);
    bool make_payment(int UsrIdx);
    
    void dishRecognizer();
    int faceRecognizer();

private slots:
    void on_dishRgBt_clicked();
    void on_dishRgBt_pressed();
    void on_dishRgBt_released();
    void timerUpdata(void);
    void restart_window();


private:
    Ui::Widget *ui;
    QTimer *cur_timer;
    QTimer restart_timer;
    static QLabel *faceDisplay;
    static QLabel *dishDisplay;

    VideoCapture cap;
    CameraDriver *cam;
    static cv::Mat dish_image;
    static cv::Mat face_image;
    static cv::Mat dst_image;
    cv::Mat m;
    double total_price;
};
#endif // WIDGET_H
