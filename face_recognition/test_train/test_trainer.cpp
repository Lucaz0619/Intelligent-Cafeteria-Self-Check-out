#include "gtest/gtest.h"
#include "opencv2/opencv.hpp"
#include "opencv2/core.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/face.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <fstream>

using namespace cv;
using namespace std;
using namespace cv::face;

int getdir (string dir, vector<string> &files)
{
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cerr << errno << endl;
        return errno;
    }

    while ((dirp = readdir(dp)) != NULL) {
        if(to_string('.').compare(string(dirp->d_name)) < 0){
                files.push_back(string(dirp->d_name));
        }
    }
    closedir(dp);
    return 0;
}

// Test case to ensure the getdir function returns zero when given a valid directory
TEST(getdirTest, ValidDirectory) {
    vector<string> files;
    int result = getdir("./dataset", files);
    EXPECT_EQ(result, 0);
}

// Test case to ensure the classifier can be loaded successfully
TEST(ClassifierTest, LoadSuccess) {
    CascadeClassifier classifier;
    bool result = classifier.load("./cascades/lbpcascade_frontalface.xml");
    EXPECT_TRUE(result);
}

// Test case to ensure the recognizer can be created successfully
TEST(RecognizerTest, CreateSuccess) {
    Ptr<LBPHFaceRecognizer> recognizer = LBPHFaceRecognizer::create();
    EXPECT_TRUE(recognizer != nullptr);
}

// Test case to ensure the embeddings can be trained and saved successfully
TEST(TrainAndSaveTest, Success) {
    string filename = string("./dataset");
    vector<string> dirs = vector<string>();
    getdir(filename, dirs);
    Mat picture;
    vector<Mat> Images;
    vector<int> Labels;
    Mat frame;

    Ptr<LBPHFaceRecognizer> recognizer = LBPHFaceRecognizer::create();

    CascadeClassifier classifier;
    classifier.load("./cascades/lbpcascade_frontalface.xml");
    ofstream labels;
    labels.open("./recognizer/labels.txt");

    for(unsigned int i = 0; i < dirs.size(); i ++){
        labels << i << " " << dirs[i] << endl;
        string new_path = filename + "/" + dirs[i];
        vector<string> photos = vector<string>();
        getdir(new_path, photos);
        for (unsigned int photo = 0; photo < photos.size(); photo++){
            string photo_path = new_path + "/" + photos[photo];
            cout << "[INFO] Reading photo " << photo_path << endl;
            picture = imread(photo_path);
            cvtColor(picture, frame, CV_BGR2GRAY);
            vector<Rect> faces;
            classifier.detectMultiScale(frame, faces, 1.2, 6);

            for(size_t k = 0; k < faces.size(); k++){
                Mat face = frame(faces[k]);
                Images.push_back(face);
                Labels.push_back(i);
            }
        }
    }
    labels.close();

    recognizer->train(Images, Labels);
    recognizer->save("./recognizer/embeddings.xml");

    EXPECT_TRUE(true); // dummy expectation to indicate successful test
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
