#ifndef EXAMPLETHREADS_H
#define EXAMPLETHREADS_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QThread>



class MyThread : public QThread
{
Q_OBJECT
public:
explicit MyThread(QString s);

  void run();

signals:
  void send(int);
  void dataReceived(QByteArray data);

private slots:
    //Функция вызывается при получении данных на SerialPort
    void uart_recive();

private:
  QString name;
};





#endif // EXAMPLETHREADS_H
