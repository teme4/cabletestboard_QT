#ifndef UTILS_H
#define UTILS_H

#include <QtCore>
#include "Common/Utils/CRC.h"
#include "Model/Cable/cable.h"
class Utils
{
public:
    //Функция для получения значений определенного бита в регистре
    static quint8 getBitValue(quint32 data, quint8 pos);

    //Метод для преобразования quint32 в QByteArray
    static QByteArray convertValueToByteArray(quint32 data);

    //Метод для преобразования quint16 в QByteArray
    static QByteArray convertValueToByteArray(quint16 data);

    //Метод для преобразования quint8 в QByteArray
    static QByteArray convertValueToByteArray(quint8 data);

    //Метод для преобразования QByteArray в quint32
    static quint32 convertByteArrayToValue(QByteArray data);

    static QByteArray buildCmd(quint8 cmd);

    static Cable parse(QByteArray input);
};

#endif // UTILS_H
