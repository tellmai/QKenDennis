/********************************************************************************
** Form generated from reading UI file 'sqlmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLMANAGE_H
#define UI_SQLMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SqlManage
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QPushButton *pb_createDatabase;
    QPushButton *pb_linkDatabase;
    QPushButton *pb_executeDataBase;
    QPushButton *pb_readDataBase;
    QLineEdit *le_databaseName;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QLabel *label;
    QWidget *widget_5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pb_addData;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_delData;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_editData;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pb_submitData;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pb_cancelData;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;

    void setupUi(QWidget *SqlManage)
    {
        if (SqlManage->objectName().isEmpty())
            SqlManage->setObjectName(QStringLiteral("SqlManage"));
        SqlManage->resize(984, 614);
        horizontalLayout = new QHBoxLayout(SqlManage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new QWidget(SqlManage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(271, 0));
        widget->setMaximumSize(QSize(271, 16777215));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        pb_createDatabase = new QPushButton(widget);
        pb_createDatabase->setObjectName(QStringLiteral("pb_createDatabase"));
        pb_createDatabase->setGeometry(QRect(70, 60, 121, 41));
        pb_createDatabase->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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
        pb_linkDatabase = new QPushButton(widget);
        pb_linkDatabase->setObjectName(QStringLiteral("pb_linkDatabase"));
        pb_linkDatabase->setGeometry(QRect(30, 110, 201, 41));
        pb_linkDatabase->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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
        pb_executeDataBase = new QPushButton(widget);
        pb_executeDataBase->setObjectName(QStringLiteral("pb_executeDataBase"));
        pb_executeDataBase->setGeometry(QRect(30, 170, 201, 41));
        pb_executeDataBase->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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
        pb_readDataBase = new QPushButton(widget);
        pb_readDataBase->setObjectName(QStringLiteral("pb_readDataBase"));
        pb_readDataBase->setGeometry(QRect(80, 280, 121, 41));
        pb_readDataBase->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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
        le_databaseName = new QLineEdit(widget);
        le_databaseName->setObjectName(QStringLiteral("le_databaseName"));
        le_databaseName->setGeometry(QRect(30, 20, 201, 31));

        horizontalLayout->addWidget(widget);

        widget_3 = new QWidget(SqlManage);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(221, 0));
        widget_3->setMaximumSize(QSize(221, 16777215));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 127);"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(0, 31));
        widget_4->setMaximumSize(QSize(16777215, 31));
        widget_4->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        label = new QLabel(widget_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 6, 191, 20));

        verticalLayout_2->addWidget(widget_4);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 127);"));

        verticalLayout_2->addWidget(widget_5);


        horizontalLayout->addWidget(widget_3);

        widget_2 = new QWidget(SqlManage);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMinimumSize(QSize(0, 42));
        widget_6->setMaximumSize(QSize(16777215, 42));
        widget_6->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        pb_addData = new QPushButton(widget_6);
        pb_addData->setObjectName(QStringLiteral("pb_addData"));
        pb_addData->setMinimumSize(QSize(51, 31));
        pb_addData->setMaximumSize(QSize(51, 31));
        pb_addData->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout_2->addWidget(pb_addData);

        horizontalSpacer = new QSpacerItem(29, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pb_delData = new QPushButton(widget_6);
        pb_delData->setObjectName(QStringLiteral("pb_delData"));
        pb_delData->setMinimumSize(QSize(51, 31));
        pb_delData->setMaximumSize(QSize(51, 31));
        pb_delData->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout_2->addWidget(pb_delData);

        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pb_editData = new QPushButton(widget_6);
        pb_editData->setObjectName(QStringLiteral("pb_editData"));
        pb_editData->setMinimumSize(QSize(51, 31));
        pb_editData->setMaximumSize(QSize(51, 31));
        pb_editData->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout_2->addWidget(pb_editData);

        horizontalSpacer_3 = new QSpacerItem(29, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pb_submitData = new QPushButton(widget_6);
        pb_submitData->setObjectName(QStringLiteral("pb_submitData"));
        pb_submitData->setMinimumSize(QSize(51, 31));
        pb_submitData->setMaximumSize(QSize(51, 31));
        pb_submitData->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout_2->addWidget(pb_submitData);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pb_cancelData = new QPushButton(widget_6);
        pb_cancelData->setObjectName(QStringLiteral("pb_cancelData"));
        pb_cancelData->setMinimumSize(QSize(51, 31));
        pb_cancelData->setMaximumSize(QSize(51, 31));
        pb_cancelData->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout_2->addWidget(pb_cancelData);

        horizontalSpacer_5 = new QSpacerItem(29, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        verticalLayout_3 = new QVBoxLayout(widget_7);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableView = new QTableView(widget_7);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_3->addWidget(tableView);


        verticalLayout->addWidget(widget_7);


        horizontalLayout->addWidget(widget_2);


        retranslateUi(SqlManage);

        QMetaObject::connectSlotsByName(SqlManage);
    } // setupUi

    void retranslateUi(QWidget *SqlManage)
    {
        SqlManage->setWindowTitle(QApplication::translate("SqlManage", "SqlManage", Q_NULLPTR));
        pb_createDatabase->setText(QApplication::translate("SqlManage", "\345\210\233\345\273\272\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        pb_linkDatabase->setText(QApplication::translate("SqlManage", "\350\277\236\346\216\245\346\225\260\346\215\256\345\272\223SimulatedTraining", Q_NULLPTR));
        pb_executeDataBase->setText(QApplication::translate("SqlManage", "SimulatedTraining\350\277\220\350\241\214\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266", Q_NULLPTR));
        pb_readDataBase->setText(QApplication::translate("SqlManage", "\350\216\267\345\217\226\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        le_databaseName->setPlaceholderText(QApplication::translate("SqlManage", "\345\221\275\345\220\215\351\234\200\350\246\201\346\240\207\345\207\206\350\247\204\345\210\231", Q_NULLPTR));
        label->setText(QApplication::translate("SqlManage", "\346\225\260\346\215\256\345\272\223\345\210\227\350\241\250", Q_NULLPTR));
        pb_addData->setText(QApplication::translate("SqlManage", "\346\226\260\345\242\236", Q_NULLPTR));
        pb_delData->setText(QApplication::translate("SqlManage", "\345\210\240\351\231\244", Q_NULLPTR));
        pb_editData->setText(QApplication::translate("SqlManage", "\344\277\256\346\224\271", Q_NULLPTR));
        pb_submitData->setText(QApplication::translate("SqlManage", "\346\217\220\344\272\244", Q_NULLPTR));
        pb_cancelData->setText(QApplication::translate("SqlManage", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SqlManage: public Ui_SqlManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLMANAGE_H
