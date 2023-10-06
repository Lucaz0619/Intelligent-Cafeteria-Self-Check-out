#include "cameraDriver.h"

CameraDriver::CameraDriver(int cameraIndex)
    : cameraIndex(cameraIndex), stopCapture(false) {}

void CameraDriver::startCapture() {
    captureThread = std::thread([this]() {
        cv::VideoCapture capture(cameraIndex);
        
        if (!capture.isOpened()) {
            std::cerr << "Error: Cannot open the camera." << std::endl;
            return;
        }

        cv::Mat frame;
        
        while (!stopCapture) 
        {
            capture >> frame;
            //cv::imshow("Camera Frame", frame);
            if (frame.empty()) {
                std::cerr << "Error: Cannot read frame from the camera." << std::endl;
                break;
            }
            
            callback(frame);
        }
        capture.release();
    });
}

void CameraDriver::stopped() {
    stopCapture = true;
    if (captureThread.joinable()) {
        captureThread.join();
    }
}

void CameraDriver::processFrame(FrameCallback task) {
    callback = task;
}