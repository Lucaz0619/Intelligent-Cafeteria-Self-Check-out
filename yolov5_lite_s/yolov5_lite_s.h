// Tencent is pleased to support the open source community by making ncnn available.
//
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.
#ifndef YOLOV5_LITE_S_H
#define YOLOV5_LITE_S_H

#include "layer.h"
#include "net.h"
#include <float.h>
#include <stdio.h>
#include <vector>
#include <sys/time.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>


struct Object
{
    cv::Rect_<float> rect;
    int label;
    float prob;
};

int detect_yolov5(const cv::Mat &bgr, std::vector<Object> &objects);

void draw_objects(const cv::Mat &bgr, const std::vector<Object> &objects);

#endif // YOLOV5_LITE_S_H


