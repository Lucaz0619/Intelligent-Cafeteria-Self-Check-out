#include "facerecognition.h"

FaceRecognition::FaceRecognition(VideoCapture cap, QObject *parent) : QObject(parent)
{
    this->Camera = cap;
    this->recognizedFlag = false;
    this->UserIdx = recognize();
}

int FaceRecognition::recognize()
{
    int UsrIdx = -1;
    if (!Camera.isOpened())
    {
        cerr<<"Error opening the camera"<<endl;
        //return -1;
    }

    map<int, string> labels;
    ifstream infile("./recognizer/labels.txt");
    int a;
    string b;
    while (infile >> a >> b)
    {
        labels[a] = b;
    }

    CascadeClassifier classifier;
    classifier.load("./cascades/lbpcascade_frontalface.xml");

    Ptr<LBPHFaceRecognizer> recognizer =  LBPHFaceRecognizer::create();
    recognizer->read("./recognizer/embeddings.xml");

    Mat windowFrame;
    //namedWindow("edges", 1);
    int numframes = 0;
    time_t timer_begin, timer_end;
    time ( &timer_begin );

    while(UsrIdx == -1)
    {
        Mat frame;
        Camera.read(frame);
        cvtColor(frame, windowFrame, CV_BGR2GRAY);
        vector<Rect> faces;
        classifier.detectMultiScale(frame, faces, 1.2, 5);
        //Mat* face_arr = new Mat[faces.size()];
        string str;
        for (int i = 0; i < faces.size(); i++)
        {
            rectangle(frame, faces[i], Scalar(0, 255, 0));
            Mat face = windowFrame(faces[i]);
            //face_arr[i] = face; // store all faces
            //if (face_arr[i].empty())
              //  continue;
            double confidence = 0.0;
            int predicted = recognizer->predict(face);
            recognizer->predict(face, predicted, confidence);
            if(labels.find(predicted) == labels.end() || confidence < 25)
            {
                putText(frame, "Unknown", Point(faces[i].x ,faces[i].y - 5), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,0), 1);
            }
            else
            {
                UsrIdx = predicted;
                cout << "Face:" << labels[predicted] << endl;
                putText(frame, labels[predicted], Point(faces[i].x ,faces[i].y - 5), FONT_HERSHEY_DUPLEX, 1, Scalar(0,255,0), 1);
            }
            cout << "ID: " << predicted << " | Confidence: " << confidence << endl;
        }
        //delete []face_arr;
        numframes++;
        //imshow("edges", frame);
        if (waitKey(30) >= 0)
            break;
    }
    time ( &timer_end );
    double secondsElapsed = difftime(timer_end, timer_begin);
    cout << secondsElapsed << endl;
    recognizedFlag = true;
    UserIdx = UsrIdx;
    emit recognitionDone();
    return UsrIdx;
}

bool FaceRecognition::recognitionFinished()
{
    if (recognizedFlag == true)
        return true;
    else
        return false;
}
