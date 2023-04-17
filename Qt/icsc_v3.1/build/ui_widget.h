/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QTableWidget *orderTb;
    QLabel *listHd;
    QWidget *widget_2;
    QWidget *widget_3;
    QLabel *statusHd;
    QTextBrowser *textBrowser;
    QLabel *statusHd_2;
    QLabel *numLb;
    QLabel *nameLb;
    QLabel *mnyLb;
    QTextBrowser *endText;
    QTextBrowser *failText;
    QLabel *fcView;
    QLabel *faceLdImg;
    QLabel *tPLb;
    QLabel *priceLb;
    QFrame *frame;
    QPushButton *dishRgBt;
    QLabel *statusLb;
    QLabel *dcView;
    QLabel *dishLdImg;
    QFrame *frame_2;
    QLabel *curTime;
    QLabel *header;
    QLabel *logoIcon_r;
    QLabel *logoIcon;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1280, 800);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(730, 40, 541, 751));
        orderTb = new QTableWidget(widget);
        orderTb->setObjectName(QString::fromUtf8("orderTb"));
        orderTb->setEnabled(true);
        orderTb->setGeometry(QRect(10, 60, 521, 351));
        orderTb->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listHd = new QLabel(widget);
        listHd->setObjectName(QString::fromUtf8("listHd"));
        listHd->setGeometry(QRect(10, 10, 521, 51));
        QFont font;
        font.setPointSize(18);
        listHd->setFont(font);
        listHd->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 170, 0);\n"
"color: rgb(255, 255, 255);"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 410, 521, 341));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(290, 0, 231, 341));
        statusHd = new QLabel(widget_3);
        statusHd->setObjectName(QString::fromUtf8("statusHd"));
        statusHd->setGeometry(QRect(0, 0, 231, 41));
        QFont font1;
        font1.setPointSize(14);
        statusHd->setFont(font1);
        statusHd->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        textBrowser = new QTextBrowser(widget_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 80, 231, 261));
        statusHd_2 = new QLabel(widget_3);
        statusHd_2->setObjectName(QString::fromUtf8("statusHd_2"));
        statusHd_2->setGeometry(QRect(0, 40, 231, 41));
        statusHd_2->setFont(font1);
        statusHd_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        numLb = new QLabel(widget_3);
        numLb->setObjectName(QString::fromUtf8("numLb"));
        numLb->setGeometry(QRect(30, 120, 91, 21));
        QFont font2;
        font2.setPointSize(11);
        numLb->setFont(font2);
        nameLb = new QLabel(widget_3);
        nameLb->setObjectName(QString::fromUtf8("nameLb"));
        nameLb->setGeometry(QRect(60, 140, 91, 21));
        nameLb->setFont(font2);
        mnyLb = new QLabel(widget_3);
        mnyLb->setObjectName(QString::fromUtf8("mnyLb"));
        mnyLb->setGeometry(QRect(70, 170, 121, 41));
        QFont font3;
        font3.setPointSize(17);
        mnyLb->setFont(font3);
        endText = new QTextBrowser(widget_3);
        endText->setObjectName(QString::fromUtf8("endText"));
        endText->setGeometry(QRect(10, 230, 211, 101));
        failText = new QTextBrowser(widget_3);
        failText->setObjectName(QString::fromUtf8("failText"));
        failText->setGeometry(QRect(10, 230, 211, 101));
        statusHd->raise();
        textBrowser->raise();
        statusHd_2->raise();
        numLb->raise();
        nameLb->raise();
        mnyLb->raise();
        failText->raise();
        endText->raise();
        fcView = new QLabel(widget_2);
        fcView->setObjectName(QString::fromUtf8("fcView"));
        fcView->setGeometry(QRect(4, 5, 281, 331));
        fcView->setAlignment(Qt::AlignCenter);
        faceLdImg = new QLabel(widget_2);
        faceLdImg->setObjectName(QString::fromUtf8("faceLdImg"));
        faceLdImg->setEnabled(true);
        faceLdImg->setGeometry(QRect(90, 140, 121, 121));
        faceLdImg->setStyleSheet(QString::fromUtf8("image: url(:/pic/loading.png);"));
        tPLb = new QLabel(widget);
        tPLb->setObjectName(QString::fromUtf8("tPLb"));
        tPLb->setGeometry(QRect(270, 360, 121, 51));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        tPLb->setFont(font4);
        priceLb = new QLabel(widget);
        priceLb->setObjectName(QString::fromUtf8("priceLb"));
        priceLb->setGeometry(QRect(390, 360, 91, 51));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setWeight(50);
        priceLb->setFont(font5);
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 40, 731, 751));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        dishRgBt = new QPushButton(frame);
        dishRgBt->setObjectName(QString::fromUtf8("dishRgBt"));
        dishRgBt->setGeometry(QRect(0, 0, 731, 201));
        QFont font6;
        font6.setPointSize(50);
        dishRgBt->setFont(font6);
        dishRgBt->setStyleSheet(QString::fromUtf8(""));
        statusLb = new QLabel(frame);
        statusLb->setObjectName(QString::fromUtf8("statusLb"));
        statusLb->setGeometry(QRect(0, 0, 101, 51));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(30);
        sizePolicy.setVerticalStretch(4);
        sizePolicy.setHeightForWidth(statusLb->sizePolicy().hasHeightForWidth());
        statusLb->setSizePolicy(sizePolicy);
        statusLb->setFont(font1);
        statusLb->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(0, 85, 127);"));
        statusLb->setAlignment(Qt::AlignCenter);
        dcView = new QLabel(frame);
        dcView->setObjectName(QString::fromUtf8("dcView"));
        dcView->setGeometry(QRect(0, 210, 731, 541));
        dcView->setAlignment(Qt::AlignCenter);
        dishLdImg = new QLabel(frame);
        dishLdImg->setObjectName(QString::fromUtf8("dishLdImg"));
        dishLdImg->setGeometry(QRect(240, 340, 241, 241));
        dishLdImg->setStyleSheet(QString::fromUtf8("image: url(:/pic/loading.png);"));
        frame_2 = new QFrame(Widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(-10, 0, 1291, 41));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        curTime = new QLabel(frame_2);
        curTime->setObjectName(QString::fromUtf8("curTime"));
        curTime->setGeometry(QRect(1030, 10, 241, 21));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Consolas"));
        font7.setPointSize(11);
        curTime->setFont(font7);
        curTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        header = new QLabel(frame_2);
        header->setObjectName(QString::fromUtf8("header"));
        header->setGeometry(QRect(490, 10, 281, 31));
        header->setFont(font1);
        header->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        header->setAlignment(Qt::AlignCenter);
        header->setWordWrap(false);
        logoIcon_r = new QLabel(frame_2);
        logoIcon_r->setObjectName(QString::fromUtf8("logoIcon_r"));
        logoIcon_r->setGeometry(QRect(770, 0, 51, 41));
        logoIcon_r->setMinimumSize(QSize(30, 20));
        logoIcon_r->setStyleSheet(QString::fromUtf8("image: url(:/pic/logo.png);"));
        logoIcon = new QLabel(frame_2);
        logoIcon->setObjectName(QString::fromUtf8("logoIcon"));
        logoIcon->setEnabled(true);
        logoIcon->setGeometry(QRect(450, 0, 41, 41));
        logoIcon->setMinimumSize(QSize(30, 20));
        logoIcon->setStyleSheet(QString::fromUtf8("image: url(:/pic/logo.png);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        listHd->setText(QApplication::translate("Widget", "  Order list", nullptr));
        statusHd->setText(QApplication::translate("Widget", "  Blank", nullptr));
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#595959;\">Account Infomation</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#595959;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#595959;\">ID:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#595959;\">Name:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#595959;\">Balance:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#595959;\"><br /></p></body></html>", nullptr));
        statusHd_2->setText(QApplication::translate("Widget", "  Blank", nullptr));
        numLb->setText(QApplication::translate("Widget", "number", nullptr));
        nameLb->setText(QApplication::translate("Widget", "name", nullptr));
        mnyLb->setText(QApplication::translate("Widget", "xx.xx", nullptr));
        endText->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; color:#ff5500;\">Please remove your plate and enjoy your food :)</span></p></body></html>", nullptr));
        failText->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; color:#ff5500;\">Please</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; color:#ff5500;\">seek assistance...</span></p></body></html>", nullptr));
        fcView->setText(QString());
        faceLdImg->setText(QString());
        tPLb->setText(QApplication::translate("Widget", "Total Price:", nullptr));
        priceLb->setText(QApplication::translate("Widget", "xxx", nullptr));
        dishRgBt->setText(QApplication::translate("Widget", "empty", nullptr));
        statusLb->setText(QString());
        dcView->setText(QApplication::translate("Widget", "dish camera", nullptr));
        dishLdImg->setText(QString());
        curTime->setText(QApplication::translate("Widget", "2023-03-15 12:15", nullptr));
        header->setText(QApplication::translate("Widget", "Welcome to self-checkout", nullptr));
        logoIcon_r->setText(QString());
        logoIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
