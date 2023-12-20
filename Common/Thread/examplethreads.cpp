#include "examplethreads.h"
#include <QDebug>
#include "Common/SerialPortSender/serialportsender.h"

QSerialPort* serialp;
//Присоединение сигналов к функциям
//connect(serialp, &QSerialPort::readyRead, MyThread, &MyThread::uart_recive);

MyThread::MyThread(QString s) : name(s)
{

}

void MyThread::uart_recive(){
 emit dataReceived(serialp->readAll());

}
void MyThread::run()
{
  //Принимаем байты в отдельном от главной программе потоке
    /*
    for(int i = 0; i <= 100; i++)
  {
    emit send(i);
    Sleep(1000);
    qDebug()<<i;
  }*/
}

