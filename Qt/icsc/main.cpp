#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    // call the window.timerEvent function every 40 ms
    //    w.startTimer(40);
    return a.exec();
}   
