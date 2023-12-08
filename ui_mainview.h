/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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
    QComboBox *com_comboBox;
    QPushButton *close_btn;
    QLabel *com_label;
    QPushButton *refresh_btn;
    QPushButton *clear_btn;
    QListWidget *messages;
    QVBoxLayout *legend;
    QLabel *legend_ok;
    QLabel *legend_kz;
    QLabel *legend_ob;
    QLabel *legend_nr;
    QLabel *label;
    QFrame *right_group;
    QGridLayout *cables;
    QTableWidget *six_table;
    QTableWidget *three_table;
    QTableWidget *eleven_table;
    QPushButton *five_btn;
    QTableWidget *fifteen_table;
    QTableWidget *eighteen_table;
    QPushButton *nine_ten_btn;
    QTableWidget *sixteen_table;
    QPushButton *fifteen_btn;
    QPushButton *three_btn;
    QPushButton *eight_btn;
    QTableWidget *four_table;
    QPushButton *thirteen_btn;
    QTableWidget *seventeen_table;
    QTableWidget *eight_table;
    QPushButton *six_btn;
    QPushButton *four_btn;
    QTableWidget *nine_ten_table;
    QPushButton *sixteen_btn;
    QPushButton *two_btn;
    QPushButton *eighteen_btn;
    QPushButton *seven_btn;
    QPushButton *twelve_btn;
    QTableWidget *thirteen_table;
    QTableWidget *five_table;
    QTableWidget *twelve_table;
    QTableWidget *two_table;
    QTableWidget *one_table;
    QPushButton *eleven_btn;
    QTableWidget *seven_table;
    QPushButton *one_btn;
    QPushButton *seventeen_btn;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QStringLiteral("MainView"));
        MainView->resize(1600, 731);
        MainView->setMinimumSize(QSize(1280, 500));
        MainView->setStyleSheet(QLatin1String("#centralwidget\n"
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
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        left_group = new QFrame(centralwidget);
        left_group->setObjectName(QStringLiteral("left_group"));
        settings = new QVBoxLayout(left_group);
        settings->setObjectName(QStringLiteral("settings"));
        deviceFrame = new QFrame(left_group);
        deviceFrame->setObjectName(QStringLiteral("deviceFrame"));
        deviceFrame->setFrameShape(QFrame::StyledPanel);
        deviceFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(deviceFrame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        logo = new QLabel(deviceFrame);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setStyleSheet(QLatin1String("#centralwidget\n"
"{\n"
"        background-color: white;\n"
"}\n"
""));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Images/logo.png")));
        logo->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(logo);

        device_name_label = new QLabel(deviceFrame);
        device_name_label->setObjectName(QStringLiteral("device_name_label"));

        verticalLayout_3->addWidget(device_name_label);

        device_name = new QLineEdit(deviceFrame);
        device_name->setObjectName(QStringLiteral("device_name"));
        device_name->setReadOnly(true);

        verticalLayout_3->addWidget(device_name);


        settings->addWidget(deviceFrame);

        com_groupBox = new QGroupBox(left_group);
        com_groupBox->setObjectName(QStringLiteral("com_groupBox"));
        gridLayout = new QGridLayout(com_groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        open_btn = new QPushButton(com_groupBox);
        open_btn->setObjectName(QStringLiteral("open_btn"));

        gridLayout->addWidget(open_btn, 1, 0, 1, 1);

        com_comboBox = new QComboBox(com_groupBox);
        com_comboBox->setObjectName(QStringLiteral("com_comboBox"));

        gridLayout->addWidget(com_comboBox, 0, 1, 1, 1);

        close_btn = new QPushButton(com_groupBox);
        close_btn->setObjectName(QStringLiteral("close_btn"));

        gridLayout->addWidget(close_btn, 1, 1, 1, 1);

        com_label = new QLabel(com_groupBox);
        com_label->setObjectName(QStringLiteral("com_label"));

        gridLayout->addWidget(com_label, 0, 0, 1, 1);

        refresh_btn = new QPushButton(com_groupBox);
        refresh_btn->setObjectName(QStringLiteral("refresh_btn"));

        gridLayout->addWidget(refresh_btn, 2, 0, 1, 1);

        clear_btn = new QPushButton(com_groupBox);
        clear_btn->setObjectName(QStringLiteral("clear_btn"));

        gridLayout->addWidget(clear_btn, 2, 1, 1, 1);


        settings->addWidget(com_groupBox);

        messages = new QListWidget(left_group);
        messages->setObjectName(QStringLiteral("messages"));
        messages->setEnabled(true);
        messages->setBatchSize(104);

        settings->addWidget(messages);

        legend = new QVBoxLayout();
        legend->setSpacing(0);
        legend->setObjectName(QStringLiteral("legend"));
        legend_ok = new QLabel(left_group);
        legend_ok->setObjectName(QStringLiteral("legend_ok"));
        legend_ok->setStyleSheet(QStringLiteral("border-radius: 0px;"));

        legend->addWidget(legend_ok);

        legend_kz = new QLabel(left_group);
        legend_kz->setObjectName(QStringLiteral("legend_kz"));
        legend_kz->setStyleSheet(QLatin1String("background-color: red;\n"
"border-radius: 0px;"));

        legend->addWidget(legend_kz);

        legend_ob = new QLabel(left_group);
        legend_ob->setObjectName(QStringLiteral("legend_ob"));
        legend_ob->setStyleSheet(QLatin1String("background-color: green;\n"
"border-radius: 0px;"));

        legend->addWidget(legend_ob);

        legend_nr = new QLabel(left_group);
        legend_nr->setObjectName(QStringLiteral("legend_nr"));
        legend_nr->setStyleSheet(QLatin1String("background-color: yellow;\n"
"border-radius: 0px;"));

        legend->addWidget(legend_nr);

        label = new QLabel(left_group);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("background-color: rgb(20,170,255);\n"
"border-radius: 0px;"));

        legend->addWidget(label);


        settings->addLayout(legend);


        horizontalLayout->addWidget(left_group);

        right_group = new QFrame(centralwidget);
        right_group->setObjectName(QStringLiteral("right_group"));
        cables = new QGridLayout(right_group);
        cables->setSpacing(6);
        cables->setObjectName(QStringLiteral("cables"));
        cables->setSizeConstraint(QLayout::SetDefaultConstraint);
        six_table = new QTableWidget(right_group);
        six_table->setObjectName(QStringLiteral("six_table"));

        cables->addWidget(six_table, 5, 1, 1, 1);

        three_table = new QTableWidget(right_group);
        three_table->setObjectName(QStringLiteral("three_table"));

        cables->addWidget(three_table, 2, 1, 1, 1);

        eleven_table = new QTableWidget(right_group);
        eleven_table->setObjectName(QStringLiteral("eleven_table"));

        cables->addWidget(eleven_table, 9, 1, 1, 1);

        five_btn = new QPushButton(right_group);
        five_btn->setObjectName(QStringLiteral("five_btn"));

        cables->addWidget(five_btn, 4, 0, 1, 1);

        fifteen_table = new QTableWidget(right_group);
        fifteen_table->setObjectName(QStringLiteral("fifteen_table"));

        cables->addWidget(fifteen_table, 12, 1, 1, 1);

        eighteen_table = new QTableWidget(right_group);
        eighteen_table->setObjectName(QStringLiteral("eighteen_table"));

        cables->addWidget(eighteen_table, 15, 1, 1, 1);

        nine_ten_btn = new QPushButton(right_group);
        nine_ten_btn->setObjectName(QStringLiteral("nine_ten_btn"));

        cables->addWidget(nine_ten_btn, 8, 0, 1, 1);

        sixteen_table = new QTableWidget(right_group);
        sixteen_table->setObjectName(QStringLiteral("sixteen_table"));

        cables->addWidget(sixteen_table, 13, 1, 1, 1);

        fifteen_btn = new QPushButton(right_group);
        fifteen_btn->setObjectName(QStringLiteral("fifteen_btn"));

        cables->addWidget(fifteen_btn, 12, 0, 1, 1);

        three_btn = new QPushButton(right_group);
        three_btn->setObjectName(QStringLiteral("three_btn"));

        cables->addWidget(three_btn, 2, 0, 1, 1);

        eight_btn = new QPushButton(right_group);
        eight_btn->setObjectName(QStringLiteral("eight_btn"));

        cables->addWidget(eight_btn, 7, 0, 1, 1);

        four_table = new QTableWidget(right_group);
        four_table->setObjectName(QStringLiteral("four_table"));

        cables->addWidget(four_table, 3, 1, 1, 1);

        thirteen_btn = new QPushButton(right_group);
        thirteen_btn->setObjectName(QStringLiteral("thirteen_btn"));

        cables->addWidget(thirteen_btn, 11, 0, 1, 1);

        seventeen_table = new QTableWidget(right_group);
        seventeen_table->setObjectName(QStringLiteral("seventeen_table"));

        cables->addWidget(seventeen_table, 14, 1, 1, 1);

        eight_table = new QTableWidget(right_group);
        eight_table->setObjectName(QStringLiteral("eight_table"));

        cables->addWidget(eight_table, 7, 1, 1, 1);

        six_btn = new QPushButton(right_group);
        six_btn->setObjectName(QStringLiteral("six_btn"));

        cables->addWidget(six_btn, 5, 0, 1, 1);

        four_btn = new QPushButton(right_group);
        four_btn->setObjectName(QStringLiteral("four_btn"));

        cables->addWidget(four_btn, 3, 0, 1, 1);

        nine_ten_table = new QTableWidget(right_group);
        nine_ten_table->setObjectName(QStringLiteral("nine_ten_table"));

        cables->addWidget(nine_ten_table, 8, 1, 1, 1);

        sixteen_btn = new QPushButton(right_group);
        sixteen_btn->setObjectName(QStringLiteral("sixteen_btn"));

        cables->addWidget(sixteen_btn, 13, 0, 1, 1);

        two_btn = new QPushButton(right_group);
        two_btn->setObjectName(QStringLiteral("two_btn"));

        cables->addWidget(two_btn, 1, 0, 1, 1);

        eighteen_btn = new QPushButton(right_group);
        eighteen_btn->setObjectName(QStringLiteral("eighteen_btn"));

        cables->addWidget(eighteen_btn, 15, 0, 1, 1);

        seven_btn = new QPushButton(right_group);
        seven_btn->setObjectName(QStringLiteral("seven_btn"));

        cables->addWidget(seven_btn, 6, 0, 1, 1);

        twelve_btn = new QPushButton(right_group);
        twelve_btn->setObjectName(QStringLiteral("twelve_btn"));

        cables->addWidget(twelve_btn, 10, 0, 1, 1);

        thirteen_table = new QTableWidget(right_group);
        thirteen_table->setObjectName(QStringLiteral("thirteen_table"));

        cables->addWidget(thirteen_table, 11, 1, 1, 1);

        five_table = new QTableWidget(right_group);
        five_table->setObjectName(QStringLiteral("five_table"));

        cables->addWidget(five_table, 4, 1, 1, 1);

        twelve_table = new QTableWidget(right_group);
        twelve_table->setObjectName(QStringLiteral("twelve_table"));

        cables->addWidget(twelve_table, 10, 1, 1, 1);

        two_table = new QTableWidget(right_group);
        two_table->setObjectName(QStringLiteral("two_table"));

        cables->addWidget(two_table, 1, 1, 1, 1);

        one_table = new QTableWidget(right_group);
        one_table->setObjectName(QStringLiteral("one_table"));

        cables->addWidget(one_table, 0, 1, 1, 1);

        eleven_btn = new QPushButton(right_group);
        eleven_btn->setObjectName(QStringLiteral("eleven_btn"));

        cables->addWidget(eleven_btn, 9, 0, 1, 1);

        seven_table = new QTableWidget(right_group);
        seven_table->setObjectName(QStringLiteral("seven_table"));

        cables->addWidget(seven_table, 6, 1, 1, 1);

        one_btn = new QPushButton(right_group);
        one_btn->setObjectName(QStringLiteral("one_btn"));

        cables->addWidget(one_btn, 0, 0, 1, 1);

        seventeen_btn = new QPushButton(right_group);
        seventeen_btn->setObjectName(QStringLiteral("seventeen_btn"));

        cables->addWidget(seventeen_btn, 14, 0, 1, 1);


        horizontalLayout->addWidget(right_group);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);
        MainView->setCentralWidget(centralwidget);

        retranslateUi(MainView);

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "\320\237\320\273\320\260\321\202\320\260 \320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\270 \320\232\320\260\320\261\320\265\320\273\320\265\320\271", 0));
        logo->setText(QString());
        device_name_label->setText(QApplication::translate("MainView", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", 0));
        device_name->setText(QApplication::translate("MainView", "\320\237\320\273\320\260\321\202\320\260 \320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\270 \320\232\320\260\320\261\320\265\320\273\320\265\320\271", 0));
        com_groupBox->setTitle(QApplication::translate("MainView", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 COM", 0));
        open_btn->setText(QApplication::translate("MainView", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        close_btn->setText(QApplication::translate("MainView", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        com_label->setText(QApplication::translate("MainView", "COM \320\277\320\276\321\200\321\202", 0));
        refresh_btn->setText(QApplication::translate("MainView", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", 0));
        clear_btn->setText(QApplication::translate("MainView", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\272\320\276\320\275\321\201\320\276\320\273\321\214", 0));
        legend_ok->setText(QApplication::translate("MainView", "\320\236\320\232 - \320\226\320\270\320\273\320\260 \320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\260", 0));
        legend_kz->setText(QApplication::translate("MainView", "\320\232\320\227 - \320\232\320\276\321\200\320\276\321\202\320\272\320\276\320\265 \320\267\320\260\320\274\321\213\320\272\320\260\320\275\320\270\320\265", 0));
        legend_ob->setText(QApplication::translate("MainView", "\320\236\320\221 - \320\236\320\261\321\200\321\213\320\262 \320\272\320\260\320\261\320\265\320\273\321\217", 0));
        legend_nr->setText(QApplication::translate("MainView", "\320\235\320\240 - \320\235\320\265\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\275\320\260\321\217 \321\200\320\260\321\201\320\277\320\270\320\275\320\276\320\262\320\272\320\260", 0));
        label->setText(QApplication::translate("MainView", "NC - \320\235\320\265 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\265\321\202\321\201\321\217", 0));
        five_btn->setText(QApplication::translate("MainView", "\320\237\320\232\320\243-\320\232\320\234 (\320\221\320\276\320\261)", 0));
        nine_ten_btn->setText(QApplication::translate("MainView", "\320\237\320\232\320\243 - \320\235\320\232\320\232\320\270\320\237\320\220", 0));
        fifteen_btn->setText(QApplication::translate("MainView", "Internal_External_fridge", 0));
        three_btn->setText(QApplication::translate("MainView", "\320\237\320\273\320\260\321\202\320\260 \320\277\320\265\321\200\320\265\320\272\320\273. 1 - \320\237\320\273\320\260\321\202\320\260 \320\277\320\265\321\200\320\265\320\272\320\273. 2", 0));
        eight_btn->setText(QApplication::translate("MainView", "\320\237\320\232\320\243 - \320\235\320\232\320\232\320\270\320\237\320\220 (UART)", 0));
        thirteen_btn->setText(QApplication::translate("MainView", "\320\237\320\232\320\243 - \320\235\320\232\320\232\320\270\320\237\320\220 - \320\220\320\236\320\234", 0));
        six_btn->setText(QApplication::translate("MainView", "\320\237\320\232\320\243 - SD/ SC", 0));
        four_btn->setText(QApplication::translate("MainView", "\320\237\320\232\320\243-\320\232\320\234 (\320\220\320\273\320\270\321\201\320\260)", 0));
        sixteen_btn->setText(QApplication::translate("MainView", "\320\237\320\232\320\243-\320\235\320\232\320\232\320\270\320\237\320\220-\320\220\320\236\320\234 v4.0", 0));
        two_btn->setText(QApplication::translate("MainView", "\320\235\320\232\320\232\320\270\320\237\320\220 - \320\237\320\273\320\260\321\202\320\260 \320\277\320\265\321\200\320\265\320\272\320\273.", 0));
        eighteen_btn->setText(QApplication::translate("MainView", "\320\235\320\232\320\232 - \320\236\320\237", 0));
        seven_btn->setText(QApplication::translate("MainView", "\320\235\320\232\320\232\320\270\320\237\320\220 - \320\232\320\276\320\274\320\277\320\265\320\275\321\201. \320\264\320\270\321\201\320\277.", 0));
        twelve_btn->setText(QApplication::translate("MainView", "\320\237\320\232\320\243 - \320\235\320\232\320\232\320\270\320\237\320\220 - \320\224\320\236\320\244 (\320\224\320\236\320\244)", 0));
        eleven_btn->setText(QApplication::translate("MainView", "\320\237\320\232\320\243 - \320\235\320\232\320\232\320\270\320\237\320\220 - \320\224\320\236\320\244 (\320\235\320\232\320\232)", 0));
        one_btn->setText(QApplication::translate("MainView", "\320\235\320\232\320\232\320\270\320\237\320\220 - \320\234\320\233\320\230", 0));
        seventeen_btn->setText(QApplication::translate("MainView", "Ethernet", 0));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
