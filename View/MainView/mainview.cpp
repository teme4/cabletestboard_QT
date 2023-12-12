#include "mainview.h"
#include "ui_mainview.h"
#include <QDesktopServices>
MainView::MainView(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainView)
{
    ui->setupUi(this);
    init();
}

/*
 * Инициализация
 */







void MainView::init(){
    QVector<QPushButton*> buttons={ui->btn_1_1,
                                   ui->btn_2_2,
                                   ui->btn_3_3,
                                   ui->btn_4_4,
                                   ui->btn_5_5,
                                   ui->btn_6_6,
                                   ui->btn_7_7,
                                   ui->btn_8_8,
                                   ui->btn_9_9,
                                   ui->btn_10_10,
                                   ui->btn_11_11,
                                   ui->btn_12_12,
                                   ui->btn_13_13};

    QVector<QTableWidget*> tables={ui->table_1,
                                   ui->table_2,
                                   ui->table_3,
                                   ui->table_4,
                                   ui->table_5,
                                   ui->table_6,
                                   ui->table_7,
                                   ui->table_8,
                                   ui->table_9,
                                   ui->table_10,
                                   ui->table_11,
                                   ui->table_12,
                                   ui->table_13};

    //Список с сообщениями будет скроллится вниз каждый раз при добавлении нового сообщения
    connect(ui->messages->model(), SIGNAL(rowsInserted(QModelIndex,int,int)),
            ui->messages, SLOT(scrollToBottom()));

     //Отрисовка иконок для кнопок
    for(QPushButton *btn : buttons) {
     btn->setIcon(QIcon(QDir::currentPath()+"/icons/1.png"));
     btn->setToolTip("optional tooltip");
     btn->setFixedSize(32,32);
 }

    //Начальное состояние всех таблиц при старте программы
    for(int i=0;i<13;i++)
    {
      clearTable(tables.at(i));
    }
    }

/*
 * Деструктор
 */
MainView::~MainView()
{
    delete ui;
}

/*
 * Присоединие презентера к данному view (вызывается в конструкторе презентера)
 *
 * presenter - указатель на соответствующий форме объект MainPresenter
 */
void MainView::attachPresenter(MainPresenter *presenter){
    this->presenter = presenter;
}

/*
 * Обновить список COM портов
 */
 QString com_ports[5];
extern QList<QString> result;

  void MainView::refreshCom(QList<QString> ports){

        for (int i=0;i<result.count() ; i++)
        {         
         com_ports[i]=result[i];
        }

 }

/*
 * Напечатать сообщение в окно сообщений с меткой времени
 */
void MainView::printMessage(QString message){
    ui->messages->addItem(QString("%1 - %2").arg(QDateTime::currentDateTime().toString("hh:mm:ss"),message));
}

/*
 * Метод вызывается когда приходят данные с COM порта
 */
void MainView::update(Cable cable){
    switch (cable.number) {
    case 0x01:
        drawTable(ui->table_1, cable);
        break;
    case 0x02:
        drawTable(ui->table_2, cable);
        break;
    case 0x03:
        drawTable(ui->table_3, cable);
        break;
    case 0x04:
        drawTable(ui->table_4, cable);
        break;
    case 0x05:
        drawTable(ui->table_5, cable);
        break;
    case 0x06:
        drawTable(ui->table_6, cable);
        break;
    case 0x07:
        drawTable(ui->table_7, cable);
        break;
    case 0x08:
        drawTable(ui->table_8, cable);
        break;
    case 0x09:
        drawTable(ui->table_9, cable);
        break;
    case 0x10:
        drawTable(ui->table_10, cable);
        break;
    case 0x11:
        drawTable(ui->table_11, cable);
        break;
    case 0x12:
        drawTable(ui->table_12, cable);
        break;
    case 0x13:
        drawTable(ui->table_13, cable);
        break;   
    case 0x95:
        printMessage(QString("COM порт найдет и открыт"));
        break;
    }
}

/*
 * Отрисовать таблицу, подсказку и сообщение
 */
void MainView::drawTable(QTableWidget* table, Cable cable){
    //Очистка таблицы
    clearTable(table);

    //Информация о кабеле выводится при наведении на него
    table->setToolTip(cable.info());

    //Вывод информации в окно сообщений
    printMessage(QString("%1: %2").arg(cable.name, cable.commonState));

    //Одна строка, количество столбцов равно количеству массива data
    table->setColumnCount(cable.coresState.size());
    table->setRowCount(1);

    //Заголовки таблицы не видны
    table->verticalHeader()->setVisible(false);
    table->horizontalHeader()->setVisible(false);

    //Нельзя редактировать, по горизонтали размер по содержимому, по вертикали растягивается на весь виджет
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //Заполнение таблицы
    for (int i = 0; i < cable.coresState.size(); i++){
        table->setItem(0, i, new QTableWidgetItem(cable.coresState[i]));
        table->item(0, i)->setTextAlignment(Qt::AlignCenter);

        if (cable.coresState[i] == "КЗ") table->item(0, i)->setBackground(QColor("red"));
        if (cable.coresState[i] == "ОБ") table->item(0, i)->setBackground(QColor("green"));
        if (cable.coresState[i] == "НР") table->item(0, i)->setBackground(QColor("yellow"));
        if (cable.coresState[i] == "NC") table->item(0, i)->setBackground(QColor(20, 170, 255));
    }
}

/*
 * Очистить таблицу и подсказку
 */
void MainView::clearTable(QTableWidget* table){
    table->setToolTip("Пока нет информации...");
    table->model()->removeRows(0, table->model()->rowCount());
    table->model()->removeColumns(0, table->model()->columnCount());
}

/*
 * Метод для обработки события закрытия окна
 *
 * event - указтель на событие закрытия окна
 */
void MainView::closeEvent(QCloseEvent *event)
{
    event->ignore();
    this->presenter->onWindowClose();
    event->accept();
}

/*
 * Слоты с UI
 */
void MainView::on_open_btn_clicked()
{
    int counter=0;
    bool state;
    this->presenter->refreshCom1();

    for (int i=0;i<5 ;i++ ) {
        if(com_ports[i]!="")
            counter++;
    }
      for (int i=0;i<(counter) ; i++) {
      if(presenter->openCom(com_ports[i])==1)
      {
         if(presenter->execCmd(0x95)==0)
           presenter->closeCom();
      }
  }
}

/*
void MainView::on_close_btn_clicked()
{
    this->presenter->closeCom();
}
*/
/*
 * Перед посылкой команды таблица очищается
 */
void MainView::on_btn_1_clicked()
{
    clearTable(ui->table_1);
    if(presenter->execCmd(0x01)==0)
        presenter->execCmd(0x01);
}


void MainView::on_btn_2_clicked()
{
    clearTable(ui->table_2);
    if(presenter->execCmd(0x02)==0)
        presenter->execCmd(0x02);
}


void MainView::on_btn_3_clicked()
{
    clearTable(ui->table_3);
    if(presenter->execCmd(0x03)==0)
        presenter->execCmd(0x03);
}


void MainView::on_btn_4_clicked()
{
    clearTable(ui->table_4);
    if(presenter->execCmd(0x04)==0)
        presenter->execCmd(0x04);
}


void MainView::on_btn_5_clicked()
{
    clearTable(ui->table_5);
    if(presenter->execCmd(0x05)==0)
        presenter->execCmd(0x05);
}


void MainView::on_btn_6_clicked()
{
    clearTable(ui->table_6);
    if(presenter->execCmd(0x06)==0)
        presenter->execCmd(0x06);
}


void MainView::on_btn_7_clicked()
{
    clearTable(ui->table_7);
    if(presenter->execCmd(0x07)==0)
        presenter->execCmd(0x07);
}


void MainView::on_btn_8_clicked()
{
    clearTable(ui->table_8);
    if(presenter->execCmd(0x08)==0)
        presenter->execCmd(0x08);
}

void MainView::on_btn_9_clicked()
{
    clearTable(ui->table_9);
    if(presenter->execCmd(0x09)==0)
        presenter->execCmd(0x09);
}

void MainView::on_btn_10_clicked()
{
    clearTable(ui->table_10);
    if(presenter->execCmd(0x10)==0)
        presenter->execCmd(0x10);
}

void MainView::on_btn_11_clicked()
{
    clearTable(ui->table_11);
    if(presenter->execCmd(0x11)==0)
        presenter->execCmd(0x11);
}


void MainView::on_btn_12_clicked()
{
    clearTable(ui->table_12);
    if(presenter->execCmd(0x12)==0)
        presenter->execCmd(0x12);
}

void MainView::on_btn_13_clicked()
{
    clearTable(ui->table_13);
    if(presenter->execCmd(0x13)==0)
        presenter->execCmd(0x13);
}

/*
void MainView::on_clear_btn_clicked()
{
    ui->messages->clear();
}
*/

void MainView::on_clear_table_clicked()
{
    clearTable(ui->table_1);
    clearTable(ui->table_2);
    clearTable(ui->table_3);
    clearTable(ui->table_4);
    clearTable(ui->table_5);
    clearTable(ui->table_6);
    clearTable(ui->table_7);
    clearTable(ui->table_8);
    clearTable(ui->table_9);
    clearTable(ui->table_11);
    clearTable(ui->table_12);
    clearTable(ui->table_13);

}

void MainView::on_clear_btn_clicked()
{
   ui->messages->clear();
}
 QDesktopServices services;

void MainView::on_btn_1_1_clicked()
{
   QDesktopServices::openUrl(QUrl(QDir::currentPath()+"/cables/1"));
}

void MainView::on_btn_2_2_clicked()
{
   QDesktopServices::openUrl(QUrl(QDir::currentPath()+"/cables/2"));
}



