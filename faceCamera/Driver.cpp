#include <iostream>
#include <atomic>
#include <thread>
#include <opencv2/opencv.hpp>

// 定义一个回调函数类型
typedef void (*FrameCallback)(const cv::Mat &frame);

// 相机驱动类
class CameraDriver {
public:
    CameraDriver(int cameraIndex, FrameCallback callback)
        : cameraIndex(cameraIndex), callback(callback), stopCapture(false) {}

    void startCapture() {
        captureThread = std::thread([this]() {
            cv::VideoCapture capture(cameraIndex);
            if (!capture.isOpened()) {
                std::cerr << "Error: Cannot open the camera." << std::endl;
                return;
            }

            cv::Mat frame;
            while (!stopCapture) {
                capture >> frame;
                if (frame.empty()) {
                    std::cerr << "Error: Cannot read frame from the camera." << std::endl;
                    break;
                }

                // 调用回调函数处理捕获到的帧
                callback(frame);

                if (cv::waitKey(1) >= 0) { // 检测到键盘输入
                    stopCapture = true;
                }
            }

            capture.release();
        });
    }

    void stop() {
        stopCapture = true;
        if (captureThread.joinable()) {
            captureThread.join();
        }
    }

private:
    int cameraIndex;
    FrameCallback callback;
    std::atomic<bool> stopCapture;
    std::thread captureThread;
};

// 定义一个回调函数，用于处理捕获到的帧
void processFrame(const cv::Mat &frame) {
    cv::imshow("Camera Frame", frame);

    int key = cv::waitKey(1);
    if (key >= 0) {
        // 保存当前帧到图像文件
        std::string filename = "captured_frame.png";
        cv::imwrite(filename, frame);
        std::cout << "Saved frame to: " << filename << std::endl;
    }
}

int main() {
    int cameraIndex = 0;
    CameraDriver cameraDriver0(cameraIndex, processFrame);
    cameraDriver0.startCapture();

    std::cout << "Press any key to save a frame and exit..." << std::endl;
    std::cin.get();

    //cameraDriver.stop();

    return 0;
}