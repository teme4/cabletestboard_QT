#include "cable.h"

/*
 * Конструктор модели
 * number - номер кабеля (тот же что и номер команды)
 * name - имя кабеля
 * status - 16 бит статуса
 * errors - 8 бит ошибок
 * data - состояние жил кабеля
 * state - общее состояние кабеля в виде строки
 */
Cable::Cable(quint8 number, QString name, QString commonState, QList<QString> coresState, QMap<quint8, quint8> wrongPinout)
{
    this->number = number;
    this->name = name;
    this->commonState = commonState;
    this->coresState = coresState;
    this->wrongPinout = wrongPinout;
}

/*
 * Предоставление информации о моделе в формате: ИМЯ_КАБЕЛЯ: СОСТОЯНИЕ_КАБЕЛЯ
 * Номер жилы (начиная с 1) - правильная распиновка
 */
QString Cable::info(){
    QString result = QString("%1: %2\n").arg(name, commonState);

    result.append("\n");

    QMapIterator<quint8, quint8> i(wrongPinout);
    while (i.hasNext()) {
        i.next();
        result.append(QString("Жила %1 - распиновка %2\n").arg(QString::number(i.key()), QString::number(i.value())));
    }

    result.remove(result.length()-1, 1);

    return result;
}
