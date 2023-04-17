/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_6;
    QLabel *label_28;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_14;
    QPushButton *pb_Min;
    QPushButton *pb_Max;
    QPushButton *pb_Close;
    QWidget *widget;
    QPushButton *pb_Serial;
    QPushButton *pb_interfaceCustomization;
    QPushButton *pb_netWork;
    QPushButton *pb_sqlManager;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(812, 569);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_title = new QWidget(Widget);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        widget_title->setMinimumSize(QSize(0, 48));
        widget_title->setMaximumSize(QSize(16777215, 48));
        widget_title->setStyleSheet(QStringLiteral("background-color: rgb(0, 108, 250);"));
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_title);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMinimumSize(QSize(421, 0));
        widget_6->setMaximumSize(QSize(421, 16777215));
        label_28 = new QLabel(widget_6);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(50, 10, 301, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        label_28->setFont(font);
        label_28->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_29 = new QLabel(widget_6);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 10, 32, 32));
        label_29->setMinimumSize(QSize(32, 32));
        label_29->setMaximumSize(QSize(32, 32));
        label_29->setStyleSheet(QStringLiteral("image: url(:/image/logo128.ico);"));

        horizontalLayout_2->addWidget(widget_6);

        horizontalSpacer_2 = new QSpacerItem(511, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget_14 = new QWidget(widget_title);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        widget_14->setMinimumSize(QSize(231, 0));
        widget_14->setMaximumSize(QSize(231, 16777215));
        pb_Min = new QPushButton(widget_14);
        pb_Min->setObjectName(QStringLiteral("pb_Min"));
        pb_Min->setGeometry(QRect(80, 10, 31, 31));
        pb_Min->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
" 	background-color:transparent;\n"
"	border-image: url(:/image/minimize_hover.png);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border:0px;}\n"
"QPushButton:pressed{\n"
"    background-color:transparent; \n"
"	border-image: url(:/image/minimize_active.png);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border:0px;}\n"
"QPushButton {\n"
"  	background-color:transparent;\n"
"	border-image: url(:/image/minimize_normal.png);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border:0px;\n"
"}"));
        pb_Max = new QPushButton(widget_14);
        pb_Max->setObjectName(QStringLiteral("pb_Max"));
        pb_Max->setGeometry(QRect(130, 10, 31, 31));
        pb_Max->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
" 	background-color:transparent;\n"
"	border-image: url(:/image/maximize_hover.png);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border:0px;}\n"
"QPushButton:pressed{\n"
"    background-color:transparent; \n"
"	border-image: url(:/image/maximize_active.png);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border:0px;}\n"
"QPushButton {\n"
"  	background-color:transparent;\n"
"	border-image: url(:/image/maximize_normal.png);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border:0px;\n"
"}"));
        pb_Close = new QPushButton(widget_14);
        pb_Close->setObjectName(QStringLiteral("pb_Close"));
        pb_Close->setGeometry(QRect(180, 10, 31, 31));
        pb_Close->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
" 	background-color:transparent;\n"
"	border-image: url(:/image/close_hover.png);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border:0px;}\n"
"QPushButton:pressed{\n"
"    background-color:transparent; \n"
"	border-image: url(:/image/close_active.png);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border:0px;}\n"
"QPushButton {\n"
"  	background-color:transparent;\n"
"	border-image: url(:/image/close_normal.png);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border:0px;\n"
"}"));

        horizontalLayout_2->addWidget(widget_14);


        verticalLayout->addWidget(widget_title);

        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        pb_Serial = new QPushButton(widget);
        pb_Serial->setObjectName(QStringLiteral("pb_Serial"));
        pb_Serial->setGeometry(QRect(10, 30, 121, 41));
        pb_Serial->setStyleSheet(QStringLiteral("border-image: url(:/image/bt_normal.png);"));
        pb_interfaceCustomization = new QPushButton(widget);
        pb_interfaceCustomization->setObjectName(QStringLiteral("pb_interfaceCustomization"));
        pb_interfaceCustomization->setGeometry(QRect(290, 260, 111, 41));
        pb_interfaceCustomization->setStyleSheet(QStringLiteral("border-image: url(:/image/bt_normal.png);"));
        pb_netWork = new QPushButton(widget);
        pb_netWork->setObjectName(QStringLiteral("pb_netWork"));
        pb_netWork->setGeometry(QRect(170, 110, 111, 41));
        pb_netWork->setStyleSheet(QStringLiteral("border-image: url(:/image/bt_normal.png);"));
        pb_sqlManager = new QPushButton(widget);
        pb_sqlManager->setObjectName(QStringLiteral("pb_sqlManager"));
        pb_sqlManager->setGeometry(QRect(450, 80, 111, 41));
        pb_sqlManager->setStyleSheet(QStringLiteral("border-image: url(:/image/bt_normal.png);"));

        verticalLayout->addWidget(widget);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "KenDannis", Q_NULLPTR));
        label_28->setText(QApplication::translate("Widget", "KenDannis", Q_NULLPTR));
        label_29->setText(QString());
        pb_Min->setText(QString());
        pb_Max->setText(QString());
        pb_Close->setText(QString());
        pb_Serial->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\267\245\345\205\267", Q_NULLPTR));
        pb_interfaceCustomization->setText(QApplication::translate("Widget", "\347\225\214\351\235\242\345\256\232\345\210\266\345\267\245\345\205\267", Q_NULLPTR));
        pb_netWork->setText(QApplication::translate("Widget", "\347\275\221\347\273\234\345\267\245\345\205\267", Q_NULLPTR));
        pb_sqlManager->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\345\272\223\347\256\241\347\220\206\345\267\245\345\205\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
