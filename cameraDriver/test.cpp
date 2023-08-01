#include <iostream>
#include <opencv2/opencv.hpp>
#include "faceCamera/cameraDriver.h"

void test(const cv::Mat &frame) {
    cv::imshow("Camera Frame", frame);
    int key = cv::waitKey(1);
    if (key >= 0) {
        // save the frame to a file
        std::string filename = "captured_frame.png";
        cv::imwrite(filename, frame);
        std::cout << "Saved frame to: " << filename << std::endl;
    }
}

int main() {
    int cameraIndex = 0;
    CameraDriver cameraDriver0(cameraIndex);
    cameraDriver0.startCapture();
    cameraDriver0.processFrame(test);
    std::cout << "Press any key to save a frame and exit..." << std::endl;
    std::cin.get();

    //cameraDriver0.stop();

    return 0;
}