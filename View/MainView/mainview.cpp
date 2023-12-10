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
    clearTable(ui->one_table);
    clearTable(ui->two_table);
    clearTable(ui->three_table);
    clearTable(ui->four_table);
    clearTable(ui->five_table);
    clearTable(ui->six_table);
    clearTable(ui->seven_table);
    clearTable(ui->eight_table);
    clearTable(ui->nine_ten_table);
    clearTable(ui->eleven_table);
    clearTable(ui->twelve_table);
    clearTable(ui->thirteen_table);
    clearTable(ui->fifteen_table);
    clearTable(ui->sixteen_table);
    clearTable(ui->seventeen_table);
    clearTable(ui->eighteen_table);

    //По умолчанию всегда будет "ПКУ - НККиПА (АОМ)
    if (currentCommand == CurrentCommand::NINE) ui->nine_ten_btn->setText("ПКУ - НККиПА (АОМ)");
    if (currentCommand == CurrentCommand::TEN) ui->nine_ten_btn->setText("ПКУ - НККиПА (БАТТ)");
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
 QString com_ports[10];

  void MainView::refreshCom(QList<QString> ports){

        for (int i=0;i<ports.count() ; i++)
        {
         com_ports[i]=ports.at(i);
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
        drawTable(ui->one_table, cable);
        break;
    case 0x02:
        drawTable(ui->two_table, cable);
        break;
    case 0x03:
        drawTable(ui->three_table, cable);
        break;
    case 0x04:
        drawTable(ui->four_table, cable);
        break;
    case 0x05:
        drawTable(ui->five_table, cable);
        break;
    case 0x06:
        drawTable(ui->six_table, cable);
        break;
    case 0x07:
        drawTable(ui->seven_table, cable);
        break;
    case 0x08:
        drawTable(ui->eight_table, cable);
        break;
    case 0x09:
        drawTable(ui->nine_ten_table, cable);
        break;
    case 0x10:
        drawTable(ui->nine_ten_table, cable);
        break;
    case 0x11:
        drawTable(ui->eleven_table, cable);
        break;
    case 0x12:
        drawTable(ui->twelve_table, cable);
        break;
    case 0x13:
        drawTable(ui->thirteen_table, cable);
        break;
    case 0x15:
        drawTable(ui->fifteen_table, cable);
        break;
    case 0x16:
        drawTable(ui->sixteen_table, cable);
        break;
    case 0x17:
        drawTable(ui->seventeen_table, cable);
        break;
    case 0x18:
        drawTable(ui->eighteen_table, cable);
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

    this->presenter->refreshCom();

      for (int i=0;i<com_ports->count() ; i++) {
      this->presenter->openCom(com_ports[i]);
      presenter->execCmd(0x95);
  }

    /*
      this->presenter->refreshCom();
      ui->com_comboBox->setCurrentIndex(0);
      this->presenter->openCom(ui->com_comboBox->com_ports.at());
      presenter->execCmd(0x95);

      ui->com_comboBox->setCurrentIndex(1);
      this->presenter->openCom(ui->com_comboBox->currentText());
      presenter->execCmd(0x95);

      ui->com_comboBox->setCurrentIndex(2);
      this->presenter->openCom(ui->com_comboBox->currentText());
      presenter->execCmd(0x95);*/
}


void MainView::on_close_btn_clicked()
{
    this->presenter->closeCom();
}


void MainView::on_refresh_btn_clicked()
{
    this->presenter->refreshCom();
}

/*
 * Перед посылкой команды таблица очищается
 */
void MainView::on_one_btn_clicked()
{
    clearTable(ui->one_table);
    presenter->execCmd(0x01);
}


void MainView::on_two_btn_clicked()
{
    clearTable(ui->two_table);
    presenter->execCmd(0x02);
}


void MainView::on_three_btn_clicked()
{
    clearTable(ui->three_table);
    presenter->execCmd(0x03);
}


void MainView::on_four_btn_clicked()
{
    clearTable(ui->four_table);
    presenter->execCmd(0x04);
}


void MainView::on_five_btn_clicked()
{
    clearTable(ui->five_table);
    presenter->execCmd(0x05);
}


void MainView::on_six_btn_clicked()
{
    clearTable(ui->six_table);
    presenter->execCmd(0x06);
}


void MainView::on_seven_btn_clicked()
{
    clearTable(ui->seven_table);
    presenter->execCmd(0x07);
}


void MainView::on_eight_btn_clicked()
{
    clearTable(ui->eight_table);
    presenter->execCmd(0x08);
}

void MainView::on_nine_ten_btn_clicked()
{

    clearTable(ui->nine_ten_table);

    switch (currentCommand) {
    case CurrentCommand::NINE:
        presenter->execCmd(0x09);
        currentCommand = CurrentCommand::TEN;
        ui->nine_ten_btn->setText("ПКУ - НККиПА (БАТТ)");
        break;
    case CurrentCommand::TEN:
        presenter->execCmd(0x10);
        currentCommand = CurrentCommand::NINE;
        ui->nine_ten_btn->setText("ПКУ - НККиПА (АОМ)");
        break;
    }
}

void MainView::on_eleven_btn_clicked()
{
    clearTable(ui->eleven_table);
    presenter->execCmd(0x11);
}


void MainView::on_twelve_btn_clicked()
{
    clearTable(ui->twelve_table);
    presenter->execCmd(0x12);
}

void MainView::on_thirteen_btn_clicked()
{
    clearTable(ui->thirteen_table);
    presenter->execCmd(0x13);
}


void MainView::on_fifteen_btn_clicked()
{
    clearTable(ui->fifteen_table);
    presenter->execCmd(0x15);
}


void MainView::on_sixteen_btn_clicked()
{
    clearTable(ui->sixteen_table);
    presenter->execCmd(0x16);
}


void MainView::on_seventeen_btn_clicked()
{
    clearTable(ui->seventeen_table);
    presenter->execCmd(0x17);
}

void MainView::on_eighteen_btn_clicked()
{
    clearTable(ui->eighteen_table);
    presenter->execCmd(0x18);
}


void MainView::on_clear_btn_clicked()
{
    ui->messages->clear();
}

