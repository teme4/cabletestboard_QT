#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include <Presenter/MainPresenter/mainpresenter.h>
#include <QDateTime>
#include <QCloseEvent>
#include <QTableWidget>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainView; }
QT_END_NAMESPACE

enum class CurrentCommand {
    NINE,
    TEN
};

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    MainView(QWidget *parent = nullptr);
    ~MainView();
    void init();   
    void attachPresenter(MainPresenter *presenter);
    void refreshCom(QList<QString> ports);
    void printMessage(QString message);
    void update(Cable cable);
    void drawTable(QTableWidget* table, Cable cable);
    void clearTable(QTableWidget* table);
    using handler= void(MainView::*)(void);




private slots:

    void closeEvent(QCloseEvent *event);

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_11_clicked();

    void on_open_btn_clicked();  

    void on_btn_12_clicked();

    void on_btn_13_clicked();

    void on_clear_btn_clicked();

    void on_clear_table_clicked();

    void on_btn_1_1_clicked();

    void on_btn_10_clicked();

    void on_btn_2_2_clicked();

    void on_btn_3_3_clicked();

    void on_btn_4_4_clicked();

    void on_btn_5_5_clicked();

    void on_btn_6_6_clicked();

    void on_btn_7_7_clicked();

    void on_btn_8_8_clicked();

    void on_btn_9_9_clicked();

    void on_btn_10_10_clicked();

    void on_btn_11_11_clicked();

    void on_btn_12_12_clicked();

    void on_btn_13_13_clicked();

    void on_pushButton_clicked();

    void on_tableWidget_cellActivated(int row, int column);

    void on_table_0_cellActivated(int row, int column);

public:
     std::array<handler,13>btns{
        &MainView::on_btn_1_clicked,
        &MainView::on_btn_2_clicked,
        &MainView::on_btn_3_clicked,
        &MainView::on_btn_4_clicked,
        &MainView::on_btn_5_clicked,
        &MainView::on_btn_6_clicked,
        &MainView::on_btn_7_clicked,
        &MainView::on_btn_8_clicked,
        &MainView::on_btn_9_clicked,
        &MainView::on_btn_10_clicked,
        &MainView::on_btn_11_clicked,
        &MainView::on_btn_12_clicked,
        &MainView::on_btn_13_clicked
    };

private:
    Ui::MainView *ui;
    MainPresenter *presenter;

    CurrentCommand currentCommand = CurrentCommand::NINE;

   /* QVector<QPushButton*> buttons={
                                   btn_1_1,
                                   btn_2_2,
                                   btn_3_3,
                                   btn_4_4,
                                   btn_5_5,
                                   btn_6_6,
                                   btn_7_7,
                                   btn_8_8,
                                   btn_9_9,
                                   btn_10_10,
                                   btn_11_11,
                                   btn_12_12,
                                   btn_13_13};*/

};
#endif // MAINVIEW_H
