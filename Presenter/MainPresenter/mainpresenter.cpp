#include "mainpresenter.h"
#include <View/MainView/mainview.h>

MainPresenter::MainPresenter(MainView *view)
{
    this->view = view;
    init();

}




/*
 * Начальная настройка
 */
void MainPresenter::init(){
    view->attachPresenter(this);

    this->serialPortSender = new SerialPortSender();

    //Когда в serialPortSender приходят данные - вызывается метод презентера onDataReceived
    QObject::connect(serialPortSender, &SerialPortSender::dataReceived, this, &MainPresenter::onDataReceived);

    //Обновление списка портов при старте программы
   refreshCom();

}

/*
 * Послать на COM порт команду cmd
 */
void MainPresenter::execCmd(quint8 cmd){
    QString command = QString("0x%1").arg(QString::number(cmd, 16).rightJustified(2, '0').toUpper());
    view->printMessage(serialPortSender->writeInSerialPort(Utils::buildCmd(cmd)) ? QString("Отправлена команда %1").arg(command) : QString("Не удалось отправить команду %1").arg(command));
}

/*
 * Открыть COM порт с именем name
 */
void MainPresenter::openCom(QString name){
    view->printMessage(serialPortSender->openComRW(name) ? QString("%1 открыт").arg(name) : QString("Не удалось открыть %1").arg(name));

}

/*
 * Закрыть текущий COM порт
 */
void MainPresenter::closeCom(){
    view->printMessage(serialPortSender->closeCom() ? "COM порт закрыт" : "Не удалось закрыть COM порт");

}

/*
 * Обновить список COM портов
 */
void MainPresenter::refreshCom(){
    view->refreshCom(serialPortSender->availablePorts());
    view->printMessage("Список COM портов обновлён");


}



/*
 * Обработка полученных данных с COM порта
 */
void MainPresenter::onDataReceived(QByteArray data){
    //Проверка преамбулы
    if (!data.startsWith(QByteArray::fromHex("AA55")))
        return;

    Cable cable = Utils::parse(data);

    if (cable.number == 0){
        view->printMessage("Ошибка CRC");
        return;
    }

    //Добавление данных в коллекцию презентера
    cables.insert(cable.number, cable);

    //Обновление UI
    view->update(cable);
}

/*
 * Метод вызываемый при завершении работы окна
 */
void MainPresenter::onWindowClose(){
    serialPortSender->closeCom();
    this->deleteLater();
}

