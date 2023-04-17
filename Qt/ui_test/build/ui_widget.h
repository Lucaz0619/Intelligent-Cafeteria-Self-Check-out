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
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QPushButton *faceRgBt;
    QWidget *widget_3;
    QLabel *statusHd;
    QTextBrowser *payBrowser;
    QPushButton *csvWBt;
    QLabel *fcView;
    QPushButton *fcCloseBt;
    QPushButton *fcPhotoBt;
    QPushButton *fcOpenBt;
    QLabel *faceLdImg;
    QLabel *tPLb;
    QLabel *priceLb;
    QFrame *frame;
    QPushButton *dishRgBt;
    QLabel *statusLb;
    QLabel *dcView;
    QPushButton *dcOpenBt;
    QPushButton *dcPhotoBt;
    QPushButton *dcCloseBt;
    QLabel *dishLdImg;
    QFrame *frame_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *logoIcon;
    QLabel *header;
    QLabel *logoIcon_r;
    QSpacerItem *horizontalSpacer_2;
    QDateTimeEdit *dateTime;

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
        faceRgBt = new QPushButton(widget_2);
        faceRgBt->setObjectName(QString::fromUtf8("faceRgBt"));
        faceRgBt->setGeometry(QRect(0, 0, 291, 81));
        QFont font1;
        font1.setPointSize(13);
        faceRgBt->setFont(font1);
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(290, 0, 231, 341));
        statusHd = new QLabel(widget_3);
        statusHd->setObjectName(QString::fromUtf8("statusHd"));
        statusHd->setGeometry(QRect(0, 0, 231, 41));
        QFont font2;
        font2.setPointSize(14);
        statusHd->setFont(font2);
        statusHd->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        payBrowser = new QTextBrowser(widget_3);
        payBrowser->setObjectName(QString::fromUtf8("payBrowser"));
        payBrowser->setGeometry(QRect(0, 40, 231, 301));
        csvWBt = new QPushButton(widget_3);
        csvWBt->setObjectName(QString::fromUtf8("csvWBt"));
        csvWBt->setGeometry(QRect(130, 310, 89, 25));
        fcView = new QLabel(widget_2);
        fcView->setObjectName(QString::fromUtf8("fcView"));
        fcView->setGeometry(QRect(4, 85, 281, 221));
        fcView->setAlignment(Qt::AlignCenter);
        fcCloseBt = new QPushButton(widget_2);
        fcCloseBt->setObjectName(QString::fromUtf8("fcCloseBt"));
        fcCloseBt->setGeometry(QRect(190, 310, 80, 25));
        fcPhotoBt = new QPushButton(widget_2);
        fcPhotoBt->setObjectName(QString::fromUtf8("fcPhotoBt"));
        fcPhotoBt->setGeometry(QRect(100, 310, 80, 25));
        fcOpenBt = new QPushButton(widget_2);
        fcOpenBt->setObjectName(QString::fromUtf8("fcOpenBt"));
        fcOpenBt->setGeometry(QRect(10, 310, 80, 25));
        faceLdImg = new QLabel(widget_2);
        faceLdImg->setObjectName(QString::fromUtf8("faceLdImg"));
        faceLdImg->setEnabled(true);
        faceLdImg->setGeometry(QRect(90, 140, 121, 121));
        faceLdImg->setStyleSheet(QString::fromUtf8("image: url(:/pic/loading.png);"));
        tPLb = new QLabel(widget);
        tPLb->setObjectName(QString::fromUtf8("tPLb"));
        tPLb->setGeometry(QRect(270, 360, 121, 51));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        tPLb->setFont(font3);
        priceLb = new QLabel(widget);
        priceLb->setObjectName(QString::fromUtf8("priceLb"));
        priceLb->setGeometry(QRect(390, 360, 91, 51));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        priceLb->setFont(font4);
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 40, 731, 751));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        dishRgBt = new QPushButton(frame);
        dishRgBt->setObjectName(QString::fromUtf8("dishRgBt"));
        dishRgBt->setGeometry(QRect(0, 0, 731, 201));
        QFont font5;
        font5.setPointSize(50);
        dishRgBt->setFont(font5);
        dishRgBt->setStyleSheet(QString::fromUtf8(""));
        statusLb = new QLabel(frame);
        statusLb->setObjectName(QString::fromUtf8("statusLb"));
        statusLb->setGeometry(QRect(0, 0, 101, 51));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(30);
        sizePolicy.setVerticalStretch(4);
        sizePolicy.setHeightForWidth(statusLb->sizePolicy().hasHeightForWidth());
        statusLb->setSizePolicy(sizePolicy);
        statusLb->setFont(font2);
        statusLb->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(0, 85, 127);"));
        statusLb->setAlignment(Qt::AlignCenter);
        dcView = new QLabel(frame);
        dcView->setObjectName(QString::fromUtf8("dcView"));
        dcView->setGeometry(QRect(0, 210, 731, 501));
        dcView->setAlignment(Qt::AlignCenter);
        dcOpenBt = new QPushButton(frame);
        dcOpenBt->setObjectName(QString::fromUtf8("dcOpenBt"));
        dcOpenBt->setGeometry(QRect(10, 720, 80, 25));
        dcPhotoBt = new QPushButton(frame);
        dcPhotoBt->setObjectName(QString::fromUtf8("dcPhotoBt"));
        dcPhotoBt->setGeometry(QRect(100, 720, 80, 25));
        dcCloseBt = new QPushButton(frame);
        dcCloseBt->setObjectName(QString::fromUtf8("dcCloseBt"));
        dcCloseBt->setGeometry(QRect(190, 720, 80, 25));
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
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 1271, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logoIcon = new QLabel(layoutWidget);
        logoIcon->setObjectName(QString::fromUtf8("logoIcon"));
        logoIcon->setEnabled(true);
        logoIcon->setMinimumSize(QSize(30, 20));
        logoIcon->setStyleSheet(QString::fromUtf8("image: url(:/pic/logo.png);"));

        horizontalLayout->addWidget(logoIcon);

        header = new QLabel(layoutWidget);
        header->setObjectName(QString::fromUtf8("header"));
        QFont font6;
        font6.setPointSize(12);
        header->setFont(font6);
        header->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        header->setAlignment(Qt::AlignCenter);
        header->setWordWrap(false);

        horizontalLayout->addWidget(header);

        logoIcon_r = new QLabel(layoutWidget);
        logoIcon_r->setObjectName(QString::fromUtf8("logoIcon_r"));
        logoIcon_r->setMinimumSize(QSize(30, 20));
        logoIcon_r->setStyleSheet(QString::fromUtf8("image: url(:/pic/logo.png);"));

        horizontalLayout->addWidget(logoIcon_r);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        dateTime = new QDateTimeEdit(layoutWidget);
        dateTime->setObjectName(QString::fromUtf8("dateTime"));
        dateTime->setInputMethodHints(Qt::ImhNone);
        dateTime->setReadOnly(true);
        dateTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateTime->setKeyboardTracking(false);
        dateTime->setDateTime(QDateTime(QDate(2023, 3, 14), QTime(12, 15, 0)));

        horizontalLayout->addWidget(dateTime);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        listHd->setText(QApplication::translate("Widget", "  Order list", nullptr));
        faceRgBt->setText(QApplication::translate("Widget", "empty", nullptr));
        statusHd->setText(QApplication::translate("Widget", "  Blank", nullptr));
        payBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Account</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Infomation</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Balance</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Processing payment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">...</span></p></body></html>", nullptr));
        csvWBt->setText(QApplication::translate("Widget", "write", nullptr));
        fcView->setText(QApplication::translate("Widget", "face camera", nullptr));
        fcCloseBt->setText(QApplication::translate("Widget", "close", nullptr));
        fcPhotoBt->setText(QApplication::translate("Widget", "photo", nullptr));
        fcOpenBt->setText(QApplication::translate("Widget", "open", nullptr));
        faceLdImg->setText(QString());
        tPLb->setText(QApplication::translate("Widget", "Total Price:", nullptr));
        priceLb->setText(QApplication::translate("Widget", "xxx", nullptr));
        dishRgBt->setText(QApplication::translate("Widget", "empty", nullptr));
        statusLb->setText(QString());
        dcView->setText(QApplication::translate("Widget", "dish camera", nullptr));
        dcOpenBt->setText(QApplication::translate("Widget", "open", nullptr));
        dcPhotoBt->setText(QApplication::translate("Widget", "photo", nullptr));
        dcCloseBt->setText(QApplication::translate("Widget", "close", nullptr));
        dishLdImg->setText(QString());
        label->setText(QApplication::translate("Widget", "  -----------------------", nullptr));
        logoIcon->setText(QString());
        header->setText(QApplication::translate("Widget", "Welcome to self-checkout", nullptr));
        logoIcon_r->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
