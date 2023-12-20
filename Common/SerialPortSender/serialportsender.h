#ifndef SERIALPORTSENDER_H
#define SERIALPORTSENDER_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

class SerialPortSender : public QObject
{
    Q_OBJECT
public:
    //Конструктор
    SerialPortSender();

    //Объект SerialPort
    QSerialPort* serial;

    //Запись в SerialPort
    bool writeInSerialPort(QByteArray data);

    //Закрытие SerialPort
    bool closeCom();

    //Открытие SerialPort
    bool openComRW(QString portName);

    //Настройка SerialPort
    void setupSerialPort(QString portName);

    //Получение списка незанятых портов
    QList<QString> availablePorts();

signals:
    void dataReceived(QByteArray data);

private:


    //Начальная настройка
    void init();

private slots:
    //Функция вызывается при получении данных на SerialPort
    void serialReceive();
};

#endif // SERIALPORTSENDER_H
