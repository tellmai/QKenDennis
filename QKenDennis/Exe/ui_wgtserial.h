/********************************************************************************
** Form generated from reading UI file 'wgtserial.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WGTSERIAL_H
#define UI_WGTSERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WgtSerial
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *wgt_top;
    QHBoxLayout *horizontalLayout;
    QLabel *label_38;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_Close;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QLabel *label_15;
    QComboBox *C_comboBox;
    QLabel *C_state_label;
    QLabel *label_16;
    QComboBox *Baudrate_comboBox_2;
    QLabel *C_state_label2;
    QPushButton *C_OpenCom_Button;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QPushButton *C_Upfile_Button;
    QLineEdit *C_lineEdit;
    QLabel *label_21;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *gb_send;
    QVBoxLayout *verticalLayout_4;
    QWidget *wgt_send;
    QTextEdit *te_send;

    void setupUi(QWidget *WgtSerial)
    {
        if (WgtSerial->objectName().isEmpty())
            WgtSerial->setObjectName(QStringLiteral("WgtSerial"));
        WgtSerial->resize(1131, 664);
        verticalLayout_3 = new QVBoxLayout(WgtSerial);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        wgt_top = new QWidget(WgtSerial);
        wgt_top->setObjectName(QStringLiteral("wgt_top"));
        wgt_top->setMinimumSize(QSize(0, 41));
        wgt_top->setMaximumSize(QSize(16777215, 41));
        wgt_top->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        horizontalLayout = new QHBoxLayout(wgt_top);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_38 = new QLabel(wgt_top);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setMinimumSize(QSize(24, 24));
        label_38->setMaximumSize(QSize(24, 24));
        label_38->setStyleSheet(QStringLiteral("image: url(:/image/icon-sort.png);"));

        horizontalLayout->addWidget(label_38);

        label_5 = new QLabel(wgt_top);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(765, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Button_Close = new QPushButton(wgt_top);
        Button_Close->setObjectName(QStringLiteral("Button_Close"));
        Button_Close->setMinimumSize(QSize(24, 24));
        Button_Close->setStyleSheet(QStringLiteral("border-image: url(:/image/close_hover.png);"));

        horizontalLayout->addWidget(Button_Close);


        verticalLayout_2->addWidget(wgt_top);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(WgtSerial);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(280, 0));
        groupBox_2->setMaximumSize(QSize(280, 16777215));
        groupBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(60, 40, 51, 20));
        C_comboBox = new QComboBox(groupBox_2);
        C_comboBox->setObjectName(QStringLiteral("C_comboBox"));
        C_comboBox->setGeometry(QRect(60, 60, 160, 31));
        QFont font1;
        font1.setPointSize(12);
        C_comboBox->setFont(font1);
        C_comboBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        C_comboBox->setLayoutDirection(Qt::LeftToRight);
        C_comboBox->setStyleSheet(QStringLiteral("border: 1px solid darkgray;"));
        C_comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        C_state_label = new QLabel(groupBox_2);
        C_state_label->setObjectName(QStringLiteral("C_state_label"));
        C_state_label->setGeometry(QRect(160, 171, 51, 31));
        C_state_label->setStyleSheet(QStringLiteral("image: url(:/image/Connection statuP_red.png);"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(60, 100, 54, 20));
        Baudrate_comboBox_2 = new QComboBox(groupBox_2);
        Baudrate_comboBox_2->setObjectName(QStringLiteral("Baudrate_comboBox_2"));
        Baudrate_comboBox_2->setGeometry(QRect(60, 120, 160, 31));
        Baudrate_comboBox_2->setFont(font1);
        Baudrate_comboBox_2->setStyleSheet(QStringLiteral("border: 1px solid darkgray;"));
        C_state_label2 = new QLabel(groupBox_2);
        C_state_label2->setObjectName(QStringLiteral("C_state_label2"));
        C_state_label2->setGeometry(QRect(60, 170, 81, 31));
        C_OpenCom_Button = new QPushButton(groupBox_2);
        C_OpenCom_Button->setObjectName(QStringLiteral("C_OpenCom_Button"));
        C_OpenCom_Button->setGeometry(QRect(60, 210, 160, 31));
        C_OpenCom_Button->setStyleSheet(QLatin1String("QPushButton:hover{\n"
" 	background-color:transparent;\n"
" 	border-image: url(:/image/bt_hover.png);\n"
"    border:0px;\n"
"	color: rgb(255, 255, 255);}\n"
"QPushButton:pressed{\n"
" 	background-color:transparent; \n"
" 	border-image: url(:/image/bt_active.png);\n"
"    border:0px;\n"
"	color: rgb(255, 255, 255);}\n"
"QPushButton {\n"
"  	background-color:transparent;\n"
"  	border-image: url(:/image/bt_normal.png);\n"
"    border:0px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(groupBox_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(WgtSerial);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_5->addWidget(textEdit);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(WgtSerial);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 142));
        groupBox_3->setMaximumSize(QSize(16777215, 142));
        C_Upfile_Button = new QPushButton(groupBox_3);
        C_Upfile_Button->setObjectName(QStringLiteral("C_Upfile_Button"));
        C_Upfile_Button->setGeometry(QRect(140, 50, 30, 29));
        C_Upfile_Button->setStyleSheet(QStringLiteral("border-image: url(:/image/folder.png);"));
        C_lineEdit = new QLineEdit(groupBox_3);
        C_lineEdit->setObjectName(QStringLiteral("C_lineEdit"));
        C_lineEdit->setGeometry(QRect(20, 50, 158, 31));
        C_lineEdit->setFont(font1);
        C_lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(245, 245, 245);"));
        C_lineEdit->setReadOnly(true);
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(20, 20, 111, 31));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(400, 90, 71, 21));
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(400, 30, 71, 21));
        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(600, 90, 71, 21));
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(680, 90, 61, 20));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(750, 90, 51, 16));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 10, 75, 23));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(750, 114, 75, 23));
        C_lineEdit->raise();
        label_21->raise();
        C_Upfile_Button->raise();
        checkBox->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        lineEdit->raise();
        label->raise();
        pushButton_2->raise();
        pushButton_3->raise();

        verticalLayout->addWidget(groupBox_3);

        gb_send = new QGroupBox(WgtSerial);
        gb_send->setObjectName(QStringLiteral("gb_send"));
        gb_send->setMinimumSize(QSize(223, 0));
        gb_send->setMaximumSize(QSize(16777215, 223));
        verticalLayout_4 = new QVBoxLayout(gb_send);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        wgt_send = new QWidget(gb_send);
        wgt_send->setObjectName(QStringLiteral("wgt_send"));
        wgt_send->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        te_send = new QTextEdit(wgt_send);
        te_send->setObjectName(QStringLiteral("te_send"));
        te_send->setGeometry(QRect(80, 20, 331, 141));
        te_send->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(wgt_send);


        verticalLayout->addWidget(gb_send);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(WgtSerial);

        QMetaObject::connectSlotsByName(WgtSerial);
    } // setupUi

    void retranslateUi(QWidget *WgtSerial)
    {
        WgtSerial->setWindowTitle(QApplication::translate("WgtSerial", "Serial", Q_NULLPTR));
        label_38->setText(QString());
        label_5->setText(QApplication::translate("WgtSerial", "\344\270\262\345\217\243\345\267\245\345\205\267\357\274\232", Q_NULLPTR));
        Button_Close->setText(QString());
        groupBox_2->setTitle(QApplication::translate("WgtSerial", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        label_15->setText(QApplication::translate("WgtSerial", "\344\270\262\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        C_state_label->setText(QString());
        label_16->setText(QApplication::translate("WgtSerial", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        C_state_label2->setText(QApplication::translate("WgtSerial", "\347\212\266\346\200\201\357\274\232\346\234\252\346\211\223\345\274\200", Q_NULLPTR));
        C_OpenCom_Button->setText(QApplication::translate("WgtSerial", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("WgtSerial", "\346\225\260\346\215\256\345\261\225\347\244\272", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("WgtSerial", "\350\256\276\347\275\256", Q_NULLPTR));
        C_Upfile_Button->setText(QString());
        label_21->setText(QApplication::translate("WgtSerial", "\346\226\207\344\273\266\351\200\211\346\213\251\357\274\232", Q_NULLPTR));
        checkBox->setText(QApplication::translate("WgtSerial", "HEX\345\217\221\351\200\201", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("WgtSerial", "HEX\346\230\276\347\244\272", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("WgtSerial", "\345\256\232\346\227\266\345\217\221\351\200\201", Q_NULLPTR));
        label->setText(QApplication::translate("WgtSerial", "ms/\346\254\241", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("WgtSerial", "\346\270\205\347\251\272\346\225\260\346\215\256", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("WgtSerial", "Clear", Q_NULLPTR));
        gb_send->setTitle(QApplication::translate("WgtSerial", "\345\217\221\351\200\201\346\225\260\346\215\256\350\256\276\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WgtSerial: public Ui_WgtSerial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WGTSERIAL_H
