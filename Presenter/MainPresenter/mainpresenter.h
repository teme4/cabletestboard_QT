#ifndef MAINPRESENTER_H
#define MAINPRESENTER_H

#include <QObject>
#include <QDebug>
#include "Common/SerialPortSender/serialportsender.h"
#include "Common/Utils/utils.h"
#include "Model/Cable/cable.h"

class MainView;

class MainPresenter : public QObject
{
public:
    MainPresenter(MainView *view);
    void execCmd(quint8 cmd);
    void openCom(QString name);
    void closeCom();
    void refreshCom();
    void onWindowClose();

    QMap<quint8, Cable> cables;

private slots:
    void onDataReceived(QByteArray data);

private:
    MainView *view;
    void init();
    SerialPortSender* serialPortSender;

};

#endif // MAINPRESENTER_H
