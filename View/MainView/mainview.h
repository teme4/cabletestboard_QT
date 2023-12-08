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

    void on_one_btn_clicked();

    void on_two_btn_clicked();

    void on_three_btn_clicked();

    void on_four_btn_clicked();

    void on_five_btn_clicked();

    void on_six_btn_clicked();

    void on_seven_btn_clicked();

    void on_eight_btn_clicked();

    void on_nine_ten_btn_clicked();

    void on_eleven_btn_clicked();

    void on_twelve_btn_clicked();

    void on_open_btn_clicked();

    void on_close_btn_clicked();

    void on_refresh_btn_clicked();

    void on_thirteen_btn_clicked();

    void on_fifteen_btn_clicked();

    void on_sixteen_btn_clicked();

    void on_seventeen_btn_clicked();

    void on_eighteen_btn_clicked();

    void on_clear_btn_clicked();

    void on_open_btn_pressed();

    void on_refresh_btn_pressed();

    void on_com_comboBox_activated(const QString &arg1);

    void on_com_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::MainView *ui;
    MainPresenter *presenter;

    CurrentCommand currentCommand = CurrentCommand::NINE;

};
#endif // MAINVIEW_H
