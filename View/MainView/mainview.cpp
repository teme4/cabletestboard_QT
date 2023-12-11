#include "mainview.h"
#include "ui_mainview.h"

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
    //Список с сообщениями будет скроллится вниз каждый раз при добавлении нового сообщения
    connect(ui->messages->model(), SIGNAL(rowsInserted(QModelIndex,int,int)),
            ui->messages, SLOT(scrollToBottom()));

    //Начальное состояние всех таблиц при старте программы
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
    clearTable(ui->table_14);

    //По умолчанию всегда будет "ПКУ - НККиПА (АОМ)
    if (currentCommand == CurrentCommand::NINE) ui->btn_9->setText("ПКУ - НККиПА (АОМ)");
    if (currentCommand == CurrentCommand::TEN) ui->btn_9->setText("ПКУ - НККиПА (БАТТ)");
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
        drawTable(ui->table_9, cable);
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
    case 0x14:
        drawTable(ui->table_14, cable);
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
    this->presenter->refreshCom1();
     //view->refreshCom(serialPortSender->availablePorts());
    for (int i=0;i<5 ;i++ ) {
        if(com_ports[i]!="")
            counter++;
    }
      for (int i=0;i<(com_ports->count()) ; i++) {    
     // QString manufacturer = port.manufacturer();
      this->presenter->openCom(com_ports[i]);
      presenter->execCmd(0x95);

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
    presenter->execCmd(0x01);
}


void MainView::on_btn_2_clicked()
{
    clearTable(ui->table_2);
    presenter->execCmd(0x02);
}


void MainView::on_btn_3_clicked()
{
    clearTable(ui->table_3);
    presenter->execCmd(0x03);
}


void MainView::on_btn_4_clicked()
{
    clearTable(ui->table_4);
    presenter->execCmd(0x04);
}


void MainView::on_btn_5_clicked()
{
    clearTable(ui->table_5);
    presenter->execCmd(0x05);
}


void MainView::on_btn_6_clicked()
{
    clearTable(ui->table_6);
    presenter->execCmd(0x06);
}


void MainView::on_btn_7_clicked()
{
    clearTable(ui->table_7);
    presenter->execCmd(0x07);
}


void MainView::on_btn_8_clicked()
{
    clearTable(ui->table_8);
    presenter->execCmd(0x08);
}

void MainView::on_btn_9_clicked()
{

    clearTable(ui->table_9);

    switch (currentCommand) {
    case CurrentCommand::NINE:
        presenter->execCmd(0x09);
        currentCommand = CurrentCommand::TEN;
        ui->btn_9->setText("ПКУ - НККиПА (БАТТ)");
        break;
    case CurrentCommand::TEN:
        presenter->execCmd(0x10);
        currentCommand = CurrentCommand::NINE;
        ui->btn_9->setText("ПКУ - НККиПА (АОМ)");
        break;
    }
}

void MainView::on_btn_11_clicked()
{
    clearTable(ui->table_11);
    presenter->execCmd(0x11);
}


void MainView::on_btn_12_clicked()
{
    clearTable(ui->table_12);
    presenter->execCmd(0x12);
}

void MainView::on_btn_13_clicked()
{
    clearTable(ui->table_13);
    presenter->execCmd(0x13);
}

void MainView::on_btn_14_clicked()
{
    clearTable(ui->table_14);
    presenter->execCmd(0x14);
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
    clearTable(ui->table_14);

}


