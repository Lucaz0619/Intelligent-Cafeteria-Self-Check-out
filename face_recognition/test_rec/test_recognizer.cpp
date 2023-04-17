#include <gtest/gtest.h>
#include <opencv2/opencv.hpp>
#include "opencv2/core.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/face.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <string>
#include <fstream>
#include <map>
#include <vector>

using namespace std;
using namespace cv;
using namespace cv::face;


class FaceRecognitionTest : public ::testing::Test {
protected:
  virtual void SetUp() override {
    // Load cascade classifier
    classifier.load("./cascades/lbpcascade_frontalface.xml");

    // Load face recognition model
    recognizer = LBPHFaceRecognizer::create();
    recognizer->read("./recognizer/embeddings.xml");

    // Load labels
    ifstream infile("./recognizer/labels.txt");
    int a;
    string b;
    while (infile >> a >> b) {
      labels[a] = b;
    }
  }

  virtual void TearDown() override {
    // Release camera
    cap.release();
  }

  CascadeClassifier classifier;
  Ptr<LBPHFaceRecognizer> recognizer;
  map<int, string> labels;
  VideoCapture cap;
};

TEST_F(FaceRecognitionTest, DetectFace) {
  // Open camera
  ASSERT_TRUE(cap.open(0));

  // Capture frame
  Mat frame;
  ASSERT_TRUE(cap.read(frame));

  // Convert to grayscale
  Mat gray;
  cvtColor(frame, gray, COLOR_BGR2GRAY);

  // Detect faces
  vector<Rect> faces;
  classifier.detectMultiScale(gray, faces, 1.2, 6);

  // Check if at least one face is detected
  ASSERT_FALSE(faces.empty());
}

TEST_F(FaceRecognitionTest, RecognizeFace) {
  // Open camera
  ASSERT_TRUE(cap.open(0));
  //cap.open(0);
  //ASSERT_TRUE(cap.isOpened());

  // Capture frame
  Mat frame;
  ASSERT_TRUE(cap.read(frame));

  // Convert to grayscale
  Mat gray;
  cvtColor(frame, gray, COLOR_BGR2GRAY);

  // Detect faces
  vector<Rect> faces;
  classifier.detectMultiScale(gray, faces, 1.2, 6);

  // Check if at least one face is detected
  ASSERT_FALSE(faces.empty());

  // Recognize faces
  for (size_t i = 0; i < faces.size(); i++) {
    Mat face = gray(faces[i]);
    double confidence = 0.0;
    int predicted = recognizer->predict(face);
    recognizer->predict(face, predicted, confidence);
    // Check if the label is in the labels map
    ASSERT_NE(labels.find(predicted), labels.end());
  }
}

int main(int argc, char** argv) {
::testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}
