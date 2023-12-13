#include "serialportsender.h"
#include "Common/Thread/examplethreads.h"
#include <QDebug>
#include <iostream>

QList<QString> result;
QList<QString> manufactors;
int n=0;
SerialPortSender::SerialPortSender()
{
    init();
}

/*
 * Начальная настройка
 */
void SerialPortSender::init(){
    this->serial = new QSerialPort();

    //Стандартные параметры COM-порта
    serial->setBaudRate(3000000);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    //Присоединение сигналов к функциям
    connect(serial, &QSerialPort::readyRead, this, &SerialPortSender::serialReceive);
     connect(serial, &QSerialPort::readyRead, this, &SerialPortSender::serialReceive);
     //connect(serial, &QSerialPort::readyRead, this, &ExampleThreads::run);
}

/*
 * Прием пакетов по SerialPort
 */
void SerialPortSender::serialReceive(){
    if (serial->bytesAvailable()>11)
       {
    emit dataReceived(serial->readAll());
  }
}

/*
 * Метод для записи данных в SerialPort
 */
bool SerialPortSender::writeInSerialPort(QByteArray data){
    if (serial->isOpen()){
        serial->write(data);
        return true;
    }
    return false;
}

/*
 * Метод для закрытия SerialPort
 */
bool SerialPortSender::closeCom(){
    if (serial->isOpen()){
        serial->close();
        return true;
    }
    return false;
}

/*
 * Метод для открытия SerialPort на чтение и запись
 */
bool SerialPortSender::openComRW(QString portName){
    setupSerialPort(portName);
    if (serial->open(QIODevice::ReadWrite))
        return true;
    return false;
}

/*
 * Метод для конфигурации порта по значению portName
 */
void SerialPortSender::setupSerialPort(QString portName){
    serial->setPortName(portName);
}

/*
 * Метод для получения списка доступных SerialPort портов
 */
QList<QString> SerialPortSender::availablePorts(){
         foreach(QSerialPortInfo port, QSerialPortInfo::availablePorts()) {
       // if (!port.isBusy()) result.append(port.portName());
        if (!port.isBusy())
        {
            manufactors.append(port.manufacturer());
            if(manufactors[n]=="FTDI")
                result.append(port.portName());
        }
             n++;
           }
         n=0;
    return result;
}
