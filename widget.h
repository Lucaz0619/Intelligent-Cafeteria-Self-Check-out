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

using namespace std;
using namespace cv;
using namespace cv::face;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void reboot();

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

    void readDishFrame();
    void openDishCamara();
    void closeDishCamara();
    void takeDishPhoto();
    void readFaceFrame();
    void openFaceCamara();
    void closeFaceCamara();
    void takeFacePhoto();

    void timerUpdata(void);
    void restart_window();
    void show_order(int* dishes_recognized, int dishNum);
    bool make_payment(int UsrIdx);
    int faceRecognize();

private:
    Ui::Widget *ui;
    QTimer *cur_timer;
    QTimer *timer_dish;
    QTimer *timer_face;
    QTimer restart_timer;
    //QImage    *image;
    VideoCapture cap;
    Mat src_image;
    double total_price;
};
#endif // WIDGET_H
