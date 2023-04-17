#include <iostream>
#include "cameraDriver.h"

// 定义一个回调函数，用于处理捕获到的帧


int main() {
    int cameraIndex = 0;
    CameraDriver cameraDriver(cameraIndex, processFrame);
    cameraDriver.startCapture();

    std::cout << "Press any key to save a frame and exit..." << std::endl;
    std::cin.get();

    cameraDriver.stop();

    return 0;
}