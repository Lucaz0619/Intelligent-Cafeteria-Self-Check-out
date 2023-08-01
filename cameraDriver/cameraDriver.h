#ifndef CAMERA_DRIVER_H
#define CAMERA_DRIVER_H

#include <atomic>
#include <thread>
#include <opencv2/opencv.hpp>

// 定义一个回调函数类型
typedef void (*FrameCallback)(const cv::Mat &frame);

class CameraDriver {
public:
    CameraDriver(int cameraIndex);

    void startCapture();
    void stop();
    void processFrame(FrameCallback task);

private:
    int cameraIndex;
    FrameCallback callback;
    std::atomic<bool> stopCapture;
    std::thread captureThread;
};

#endif // CAMERA_DRIVER_H
