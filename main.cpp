// to use threads, blocking I/O and callbacks to implement something similar to interrupt service routines but for userspace Linux with c++ codes
// 本代码的设计目标是通过使用线程，阻塞I/O和回调函数来实现类似于中断服务例程的用户空间Linux c++代码，并在树莓派4B上运行实现部署
// 实现使用双摄像头，先后进行食物识别与人脸识别，按上述要求该如何操作？
//其中，OpenCV已经安装，食物识别的YOLOv5模型源码yolov5_lite_s.cpp已经编译成功，人脸识别的模型源码recognizer.cpp已经编译成功，但是不知道如何将两者结合起来，实现双摄像头的食物识别与人脸识别

//引入必要的库
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <unistd.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/face.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

//定义全局变量



