#ifndef FACERECOGNITION_H
#define FACERECOGNITION_H

#include <QObject>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/face.hpp>

#include <iostream>
#include <ctime>
#include <fstream>
#include <map>
//#include "widget.h"

using namespace cv;
using namespace std;
using namespace cv::face;

class FaceRecognition : public QObject
{
    Q_OBJECT
public:
    explicit FaceRecognition(VideoCapture cap, QObject *parent = nullptr);
    int recognize();
    bool recognitionFinished();
    int UserIdx;

signals:
    void recognitionDone();

private:
    VideoCapture Camera;
    bool recognizedFlag;

};

#endif // FACERECOGNITION_H
