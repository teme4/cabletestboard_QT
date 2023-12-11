#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include <Presenter/MainPresenter/mainpresenter.h>
#include <QDateTime>
#include <QCloseEvent>
#include <QTableWidget>

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

    void on_btn_10_clicked();

    void on_btn_11_clicked();

    void on_open_btn_clicked();

    void on_close_btn_clicked();

    void on_refresh_btn_clicked();

    void on_btn_12_clicked();

    void on_btn_13_clicked();

    void on_btn_14_clicked();

    void on_clear_btn_clicked();

    void on_open_btn_pressed();

    void on_refresh_btn_pressed();

    void on_com_comboBox_activated(const QString &arg1);

    void on_com_comboBox_currentIndexChanged(const QString &arg1);

    void on_clear_table_clicked();

  private:
    Ui::MainView *ui;
    MainPresenter *presenter;

    CurrentCommand currentCommand = CurrentCommand::NINE;

};
#endif // MAINVIEW_H
