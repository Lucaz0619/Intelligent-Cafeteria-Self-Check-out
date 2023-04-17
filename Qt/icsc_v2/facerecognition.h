#ifndef FACERECOGNITION_H
#define FACERECOGNITION_H

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/face.hpp>

#include <iostream>
#include <ctime>
#include <fstream>
#include <map>

using namespace cv;
using namespace std;
using namespace cv::face;

class FaceRecognition
{
public:
    FaceRecognition(VideoCapture cap);
    int recognize();
    bool recognitionFinished();
private:
    VideoCapture Camera;
    bool recognizedFlag;
};

#endif // FACERECOGNITION_H
