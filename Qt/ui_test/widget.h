#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
//#include <qwt/qwt_thermo.h>
//#include <QBoxLayout>
//#include <QPushButton>
//#include <QLabel>

#include <QImage>
#include <QTimer>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QImage MatImageToQt(const Mat &src);

//    //bp opencv
//    void updateImage(const cv::Mat &mat);
//        QwtThermo    *thermo;
//        QHBoxLayout  *hLayout;  // horizontal layout
//        Camera       camera;
//        QLabel       *image;

//        struct MyCallback : Camera::SceneCallback {
//            Widget* window = nullptr;
//            virtual void nextScene(const cv::Mat &mat) {
//                if (nullptr != window) {
//                    window->updateImage(mat);
//                }
//            }
//        };
//        MyCallback myCallback;

private slots:
    void on_dishRgBt_clicked();

    void on_dishRgBt_pressed();

    void on_dishRgBt_released();

    void on_faceRgBt_clicked();

    void on_faceRgBt_pressed();

    void on_faceRgBt_released();

    void readDishFrame();
    void openDishCamara();
    void closeDishCamara();
    void takeDishPhoto();
    void readFaceFrame();
    void openFaceCamara();
    void closeFaceCamara();
    void takeFacePhoto();

    //void on_csvBt_clicked();

    void on_csvWBt_clicked();

private:
    Ui::Widget *ui;
    QTimer    *timer_dish;
    QTimer    *timer_face;
    //QImage    *image;
    VideoCapture cap;
    Mat src_image;
};
#endif // WIDGET_H
