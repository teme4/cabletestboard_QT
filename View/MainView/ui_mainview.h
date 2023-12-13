/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *left_group;
    QVBoxLayout *settings;
    QFrame *deviceFrame;
    QVBoxLayout *verticalLayout_3;
    QLabel *logo;
    QLabel *device_name_label;
    QLineEdit *device_name;
    QGroupBox *com_groupBox;
    QGridLayout *gridLayout;
    QPushButton *open_btn;
    QPushButton *clear_btn;
    QPushButton *clear_table;
    QListWidget *messages;
    QVBoxLayout *legend;
    QLabel *legend_ok;
    QLabel *legend_kz;
    QLabel *legend_ob;
    QLabel *legend_nr;
    QLabel *label;
    QFrame *right_group;
    QGridLayout *cables;
    QPushButton *btn_12;
    QPushButton *btn_13_13;
    QTableWidget *table_6;
    QPushButton *pushButton;
    QPushButton *btn_11;
    QPushButton *btn_6;
    QTableWidget *table_2;
    QPushButton *btn_8;
    QPushButton *btn_7_7;
    QPushButton *btn_3;
    QPushButton *btn_2_2;
    QPushButton *btn_1;
    QPushButton *btn_1_1;
    QPushButton *btn_5;
    QTableWidget *table_8;
    QTableWidget *table_4;
    QPushButton *btn_9;
    QTableWidget *table_3;
    QTableWidget *table_10;
    QPushButton *btn_13;
    QPushButton *btn_4;
    QPushButton *btn_12_12;
    QPushButton *btn_11_11;
    QTableWidget *table_1;
    QPushButton *btn_6_6;
    QTableWidget *table_5;
    QPushButton *btn_7;
    QPushButton *btn_5_5;
    QPushButton *btn_2;
    QPushButton *btn_10_10;
    QTableWidget *table_12;
    QPushButton *btn_8_8;
    QTableWidget *table_7;
    QTableWidget *table_11;
    QPushButton *btn_3_3;
    QPushButton *btn_4_4;
    QTableWidget *table_9;
    QPushButton *btn_10;
    QPushButton *btn_9_9;
    QTableWidget *table_13;
    QTableWidget *table_0;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(1600, 731);
        MainView->setMinimumSize(QSize(1280, 500));
        MainView->setStyleSheet(QString::fromUtf8("#centralwidget\n"
"{\n"
"        background-color: white;\n"
"}\n"
"\n"
"QWidget{\n"
"        font-family: Verdana;\n"
"        font-size: 12px;\n"
"        font-weight: bold;\n"
"}\n"
"\n"
"QGroupBox{\n"
"        border-radius: 5px;\n"
"        padding-top:10px;\n"
"        margin-top:10px;	\n"
"		background-color: white;\n"
"}\n"
"\n"
"QGroupBox::title{\n"
"        color: black;\n"
"        top: -10px;\n"
"        border-top-left-radius: 5px;\n"
"        border-top-right-radius: 5px;\n"
"        border: 2px solid white;\n"
"        background-color: white;\n"
"}\n"
"\n"
"QFrame{\n"
"        border-radius: 5px;\n"
"		background-color: white;\n"
"}\n"
"\n"
"QLabel{\n"
"        color: black;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"        background-color: rgb(0,146,153);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"        background-color: rgb(240,240,240);\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"        background-color: rgb(50, 100, 100);\n"
"}\n"
"\n"
"QLineEdit{\n"
"        border-radius: 5px;\n"
"        pa"
                        "dding: 3px;\n"
"        color: rgb(68,68,68);\n"
"        background-color: rgb(240,240,240);\n"
"}\n"
"\n"
"QSpinBox, QDoubleSpinBox{\n"
"        border-radius: 5px;\n"
"        padding: 3px;\n"
"        color: white;\n"
"        background-color: rgb(0,126,132);\n"
"}\n"
"\n"
"QComboBox{\n"
"        border-radius: 5px;\n"
"        padding: 3px;\n"
"        color: rgb(68,68,68);\n"
"        background-color: rgb(240,240,240);\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"     border-top-right-radius: 5px;\n"
"     border-bottom-right-radius: 5px;\n"
"     background-color: rgb(0,126,132);\n"
" }\n"
"\n"
"QDoubleSpinBox::disabled{\n"
"        border-top-left-radius: 5px;\n"
"        border-bottom-left-radius: 5px;\n"
"        padding: 3px;\n"
"        color: white;\n"
"        background-color: rgb(240,240,240);\n"
"}\n"
"\n"
"QPushButton{\n"
"        border-radius: 5px;\n"
"        color: white;\n"
"        padding: 6px;\n"
"        background-color: rgb(0,126,132);\n"
"}\n"
"\n"
"#right_group,\n"
"#left_group\n"
""
                        "{\n"
"	background-color: rgb(240,240,240);\n"
"}\n"
"\n"
"QTableWidget{\n"
"		border-radius: 0px;\n"
"}"));
        centralwidget = new QWidget(MainView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        left_group = new QFrame(centralwidget);
        left_group->setObjectName(QString::fromUtf8("left_group"));
        settings = new QVBoxLayout(left_group);
        settings->setObjectName(QString::fromUtf8("settings"));
        deviceFrame = new QFrame(left_group);
        deviceFrame->setObjectName(QString::fromUtf8("deviceFrame"));
        deviceFrame->setFrameShape(QFrame::StyledPanel);
        deviceFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(deviceFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        logo = new QLabel(deviceFrame);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setStyleSheet(QString::fromUtf8("#centralwidget\n"
"{\n"
"        background-color: white;\n"
"}\n"
""));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Images/logo.png")));
        logo->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(logo);

        device_name_label = new QLabel(deviceFrame);
        device_name_label->setObjectName(QString::fromUtf8("device_name_label"));

        verticalLayout_3->addWidget(device_name_label);

        device_name = new QLineEdit(deviceFrame);
        device_name->setObjectName(QString::fromUtf8("device_name"));
        device_name->setReadOnly(true);

        verticalLayout_3->addWidget(device_name);


        settings->addWidget(deviceFrame);

        com_groupBox = new QGroupBox(left_group);
        com_groupBox->setObjectName(QString::fromUtf8("com_groupBox"));
        gridLayout = new QGridLayout(com_groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        open_btn = new QPushButton(com_groupBox);
        open_btn->setObjectName(QString::fromUtf8("open_btn"));

        gridLayout->addWidget(open_btn, 0, 0, 1, 1);

        clear_btn = new QPushButton(com_groupBox);
        clear_btn->setObjectName(QString::fromUtf8("clear_btn"));

        gridLayout->addWidget(clear_btn, 1, 1, 1, 1);

        clear_table = new QPushButton(com_groupBox);
        clear_table->setObjectName(QString::fromUtf8("clear_table"));

        gridLayout->addWidget(clear_table, 0, 1, 1, 1);


        settings->addWidget(com_groupBox);

        messages = new QListWidget(left_group);
        messages->setObjectName(QString::fromUtf8("messages"));
        messages->setEnabled(true);
        messages->setBatchSize(104);

        settings->addWidget(messages);

        legend = new QVBoxLayout();
        legend->setSpacing(0);
        legend->setObjectName(QString::fromUtf8("legend"));
        legend_ok = new QLabel(left_group);
        legend_ok->setObjectName(QString::fromUtf8("legend_ok"));
        legend_ok->setStyleSheet(QString::fromUtf8("border-radius: 0px;"));

        legend->addWidget(legend_ok);

        legend_kz = new QLabel(left_group);
        legend_kz->setObjectName(QString::fromUtf8("legend_kz"));
        legend_kz->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"border-radius: 0px;"));

        legend->addWidget(legend_kz);

        legend_ob = new QLabel(left_group);
        legend_ob->setObjectName(QString::fromUtf8("legend_ob"));
        legend_ob->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"border-radius: 0px;"));

        legend->addWidget(legend_ob);

        legend_nr = new QLabel(left_group);
        legend_nr->setObjectName(QString::fromUtf8("legend_nr"));
        legend_nr->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border-radius: 0px;"));

        legend->addWidget(legend_nr);

        label = new QLabel(left_group);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(20,170,255);\n"
"border-radius: 0px;"));

        legend->addWidget(label);


        settings->addLayout(legend);


        horizontalLayout->addWidget(left_group);

        right_group = new QFrame(centralwidget);
        right_group->setObjectName(QString::fromUtf8("right_group"));
        cables = new QGridLayout(right_group);
        cables->setSpacing(6);
        cables->setObjectName(QString::fromUtf8("cables"));
        cables->setSizeConstraint(QLayout::SetDefaultConstraint);
        btn_12 = new QPushButton(right_group);
        btn_12->setObjectName(QString::fromUtf8("btn_12"));

        cables->addWidget(btn_12, 12, 2, 1, 1);

        btn_13_13 = new QPushButton(right_group);
        btn_13_13->setObjectName(QString::fromUtf8("btn_13_13"));
        btn_13_13->setIconSize(QSize(32, 32));

        cables->addWidget(btn_13_13, 13, 0, 1, 1);

        table_6 = new QTableWidget(right_group);
        table_6->setObjectName(QString::fromUtf8("table_6"));

        cables->addWidget(table_6, 6, 4, 1, 1);

        pushButton = new QPushButton(right_group);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        cables->addWidget(pushButton, 0, 2, 1, 1);

        btn_11 = new QPushButton(right_group);
        btn_11->setObjectName(QString::fromUtf8("btn_11"));

        cables->addWidget(btn_11, 11, 2, 1, 1);

        btn_6 = new QPushButton(right_group);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));

        cables->addWidget(btn_6, 6, 2, 1, 1);

        table_2 = new QTableWidget(right_group);
        table_2->setObjectName(QString::fromUtf8("table_2"));

        cables->addWidget(table_2, 2, 4, 1, 1);

        btn_8 = new QPushButton(right_group);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));

        cables->addWidget(btn_8, 8, 2, 1, 1);

        btn_7_7 = new QPushButton(right_group);
        btn_7_7->setObjectName(QString::fromUtf8("btn_7_7"));
        btn_7_7->setIconSize(QSize(32, 32));

        cables->addWidget(btn_7_7, 7, 0, 1, 1);

        btn_3 = new QPushButton(right_group);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));

        cables->addWidget(btn_3, 3, 2, 1, 1);

        btn_2_2 = new QPushButton(right_group);
        btn_2_2->setObjectName(QString::fromUtf8("btn_2_2"));
        btn_2_2->setIconSize(QSize(32, 32));

        cables->addWidget(btn_2_2, 2, 0, 1, 1);

        btn_1 = new QPushButton(right_group);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));

        cables->addWidget(btn_1, 1, 2, 1, 1);

        btn_1_1 = new QPushButton(right_group);
        btn_1_1->setObjectName(QString::fromUtf8("btn_1_1"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 126, 132, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        btn_1_1->setPalette(palette);
        btn_1_1->setAutoFillBackground(false);
        btn_1_1->setIconSize(QSize(32, 32));

        cables->addWidget(btn_1_1, 1, 0, 1, 1);

        btn_5 = new QPushButton(right_group);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));

        cables->addWidget(btn_5, 5, 2, 1, 1);

        table_8 = new QTableWidget(right_group);
        table_8->setObjectName(QString::fromUtf8("table_8"));

        cables->addWidget(table_8, 8, 4, 1, 1);

        table_4 = new QTableWidget(right_group);
        table_4->setObjectName(QString::fromUtf8("table_4"));

        cables->addWidget(table_4, 4, 4, 1, 1);

        btn_9 = new QPushButton(right_group);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));

        cables->addWidget(btn_9, 9, 2, 1, 1);

        table_3 = new QTableWidget(right_group);
        table_3->setObjectName(QString::fromUtf8("table_3"));

        cables->addWidget(table_3, 3, 4, 1, 1);

        table_10 = new QTableWidget(right_group);
        table_10->setObjectName(QString::fromUtf8("table_10"));

        cables->addWidget(table_10, 10, 4, 1, 1);

        btn_13 = new QPushButton(right_group);
        btn_13->setObjectName(QString::fromUtf8("btn_13"));

        cables->addWidget(btn_13, 13, 2, 1, 1);

        btn_4 = new QPushButton(right_group);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));

        cables->addWidget(btn_4, 4, 2, 1, 1);

        btn_12_12 = new QPushButton(right_group);
        btn_12_12->setObjectName(QString::fromUtf8("btn_12_12"));
        btn_12_12->setIconSize(QSize(32, 32));

        cables->addWidget(btn_12_12, 12, 0, 1, 1);

        btn_11_11 = new QPushButton(right_group);
        btn_11_11->setObjectName(QString::fromUtf8("btn_11_11"));
        btn_11_11->setIconSize(QSize(32, 32));

        cables->addWidget(btn_11_11, 11, 0, 1, 1);

        table_1 = new QTableWidget(right_group);
        table_1->setObjectName(QString::fromUtf8("table_1"));

        cables->addWidget(table_1, 1, 4, 1, 1);

        btn_6_6 = new QPushButton(right_group);
        btn_6_6->setObjectName(QString::fromUtf8("btn_6_6"));
        btn_6_6->setIconSize(QSize(32, 32));

        cables->addWidget(btn_6_6, 6, 0, 1, 1);

        table_5 = new QTableWidget(right_group);
        table_5->setObjectName(QString::fromUtf8("table_5"));

        cables->addWidget(table_5, 5, 4, 1, 1);

        btn_7 = new QPushButton(right_group);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));

        cables->addWidget(btn_7, 7, 2, 1, 1);

        btn_5_5 = new QPushButton(right_group);
        btn_5_5->setObjectName(QString::fromUtf8("btn_5_5"));
        btn_5_5->setIconSize(QSize(32, 32));

        cables->addWidget(btn_5_5, 5, 0, 1, 1);

        btn_2 = new QPushButton(right_group);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));

        cables->addWidget(btn_2, 2, 2, 1, 1);

        btn_10_10 = new QPushButton(right_group);
        btn_10_10->setObjectName(QString::fromUtf8("btn_10_10"));
        btn_10_10->setIconSize(QSize(32, 32));

        cables->addWidget(btn_10_10, 10, 0, 1, 1);

        table_12 = new QTableWidget(right_group);
        table_12->setObjectName(QString::fromUtf8("table_12"));

        cables->addWidget(table_12, 12, 4, 1, 1);

        btn_8_8 = new QPushButton(right_group);
        btn_8_8->setObjectName(QString::fromUtf8("btn_8_8"));
        btn_8_8->setIconSize(QSize(32, 32));

        cables->addWidget(btn_8_8, 8, 0, 1, 1);

        table_7 = new QTableWidget(right_group);
        table_7->setObjectName(QString::fromUtf8("table_7"));

        cables->addWidget(table_7, 7, 4, 1, 1);

        table_11 = new QTableWidget(right_group);
        table_11->setObjectName(QString::fromUtf8("table_11"));

        cables->addWidget(table_11, 11, 4, 1, 1);

        btn_3_3 = new QPushButton(right_group);
        btn_3_3->setObjectName(QString::fromUtf8("btn_3_3"));
        btn_3_3->setIconSize(QSize(32, 32));

        cables->addWidget(btn_3_3, 3, 0, 1, 1);

        btn_4_4 = new QPushButton(right_group);
        btn_4_4->setObjectName(QString::fromUtf8("btn_4_4"));
        btn_4_4->setIconSize(QSize(32, 32));

        cables->addWidget(btn_4_4, 4, 0, 1, 1);

        table_9 = new QTableWidget(right_group);
        table_9->setObjectName(QString::fromUtf8("table_9"));

        cables->addWidget(table_9, 9, 4, 1, 1);

        btn_10 = new QPushButton(right_group);
        btn_10->setObjectName(QString::fromUtf8("btn_10"));

        cables->addWidget(btn_10, 10, 2, 1, 1);

        btn_9_9 = new QPushButton(right_group);
        btn_9_9->setObjectName(QString::fromUtf8("btn_9_9"));
        btn_9_9->setIconSize(QSize(32, 32));

        cables->addWidget(btn_9_9, 9, 0, 1, 1);

        table_13 = new QTableWidget(right_group);
        table_13->setObjectName(QString::fromUtf8("table_13"));

        cables->addWidget(table_13, 13, 4, 1, 1);

        table_0 = new QTableWidget(right_group);
        table_0->setObjectName(QString::fromUtf8("table_0"));

        cables->addWidget(table_0, 0, 4, 1, 1);


        horizontalLayout->addWidget(right_group);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);
        MainView->setCentralWidget(centralwidget);

        retranslateUi(MainView);

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QCoreApplication::translate("MainView", "\320\237\320\273\320\260\321\202\320\260 \320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\270 \320\232\320\260\320\261\320\265\320\273\320\265\320\271", nullptr));
        logo->setText(QString());
        device_name_label->setText(QCoreApplication::translate("MainView", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        device_name->setText(QCoreApplication::translate("MainView", "\320\237\320\273\320\260\321\202\320\260 \320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\270 \320\232\320\260\320\261\320\265\320\273\320\265\320\271 v1.0", nullptr));
        com_groupBox->setTitle(QCoreApplication::translate("MainView", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 COM", nullptr));
        open_btn->setText(QCoreApplication::translate("MainView", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214 \320\270 \320\276\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
        clear_btn->setText(QCoreApplication::translate("MainView", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\272\320\276\320\275\321\201\320\276\320\273\321\214", nullptr));
        clear_table->setText(QCoreApplication::translate("MainView", "\320\241\320\272\321\200\321\213\321\202\321\214 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\272\320\260\320\261\320\265\320\273\321\217", nullptr));
        legend_ok->setText(QCoreApplication::translate("MainView", "\320\236\320\232 - \320\226\320\270\320\273\320\260 \320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\260", nullptr));
        legend_kz->setText(QCoreApplication::translate("MainView", "\320\232\320\227 - \320\232\320\276\321\200\320\276\321\202\320\272\320\276\320\265 \320\267\320\260\320\274\321\213\320\272\320\260\320\275\320\270\320\265", nullptr));
        legend_ob->setText(QCoreApplication::translate("MainView", "\320\236\320\221 - \320\236\320\261\321\200\321\213\320\262 \320\272\320\260\320\261\320\265\320\273\321\217", nullptr));
        legend_nr->setText(QCoreApplication::translate("MainView", "\320\235\320\240 - \320\235\320\265\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\275\320\260\321\217 \321\200\320\260\321\201\320\277\320\270\320\275\320\276\320\262\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainView", "NC - \320\235\320\265 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\265\321\202\321\201\321\217", nullptr));
        btn_12->setText(QCoreApplication::translate("MainView", "Ethernet", nullptr));
        btn_13_13->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainView", "PushButton", nullptr));
        btn_11->setText(QCoreApplication::translate("MainView", "\320\224\320\236\320\244-\321\205\320\276\320\273\320\276\320\264\320\270\320\273\321\214\320\270\320\272", nullptr));
        btn_6->setText(QCoreApplication::translate("MainView", "\320\237\320\232\320\243 - SD/ SC", nullptr));
        btn_8->setText(QCoreApplication::translate("MainView", "\320\237\320\232\320\243 - \320\235\320\232\320\232\320\270\320\237\320\220 (UART)", nullptr));
        btn_7_7->setText(QString());
        btn_3->setText(QCoreApplication::translate("MainView", "\320\237\320\273\320\260\321\202\320\260 \320\277\320\265\321\200\320\265\320\272\320\273. 1 - \320\237\320\273\320\260\321\202\320\260 \320\277\320\265\321\200\320\265\320\272\320\273. 2", nullptr));
        btn_2_2->setText(QString());
        btn_1->setText(QCoreApplication::translate("MainView", "\320\235\320\232\320\232\320\270\320\237\320\220 - \320\234\320\233\320\230", nullptr));
        btn_1_1->setText(QString());
        btn_5->setText(QCoreApplication::translate("MainView", "\320\237\320\232\320\243-\320\232\320\234 (\320\221\320\276\320\261)", nullptr));
        btn_9->setText(QCoreApplication::translate("MainView", "\320\237\320\232\320\243-\320\235\320\232\320\232-\320\221\320\220\320\242-\320\220\320\236\320\234", nullptr));
        btn_13->setText(QCoreApplication::translate("MainView", "\320\235\320\232\320\232 - \320\236\320\237", nullptr));
        btn_4->setText(QCoreApplication::translate("MainView", "\320\237\320\232\320\243-\320\232\320\234 (\320\220\320\273\320\270\321\201\320\260)", nullptr));
        btn_12_12->setText(QString());
        btn_11_11->setText(QString());
        btn_6_6->setText(QString());
        btn_7->setText(QCoreApplication::translate("MainView", "\320\235\320\232\320\232\320\270\320\237\320\220 - \320\232\320\276\320\274\320\277\320\265\320\275\321\201. \320\264\320\270\321\201\320\277.", nullptr));
        btn_5_5->setText(QString());
        btn_2->setText(QCoreApplication::translate("MainView", "\320\235\320\232\320\232\320\270\320\237\320\220 - \320\237\320\273\320\260\321\202\320\260 \320\277\320\265\321\200\320\265\320\272\320\273.", nullptr));
        btn_10_10->setText(QString());
        btn_8_8->setText(QString());
        btn_3_3->setText(QString());
        btn_4_4->setText(QString());
        btn_10->setText(QCoreApplication::translate("MainView", "\320\237\320\232\320\243 - \320\224\320\236\320\244 ", nullptr));
        btn_9_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
