#ifndef CABLE_H
#define CABLE_H

#include <QtCore>

class Cable
{
public:
    //Конструктор
    Cable(quint8 number = 0,
          QString name = "",
          QString commonState = "",
          QList<QString> coresState = QList<QString>(),
          QMap<quint8, quint8> wrongPinout = QMap<quint8, quint8>());

    //Номер кабеля (равен номеру команды)
    quint8 number;

    //Наименование кабеля
    QString name;

    //Общее состояние кабеля
    QString commonState;

    //Состояние отдельных жил кабеля
    QList<QString> coresState;

    //Ключ - какая жила с неправильной распиновкой; значение - правильная распиновка
    QMap<quint8, quint8> wrongPinout;

    //Получение информации о кабеле в текстовом виде
    QString info();
};

#endif // CABLE_H
