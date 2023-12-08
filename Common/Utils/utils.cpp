#include "utils.h"

//Функция для получения значений определенного бита в регистре
quint8 Utils::getBitValue(quint32 data, quint8 pos){
    return (data & ((quint32) 1 << pos)) >> pos;
}

//Метод для преобразования quint32 в QByteArray
QByteArray Utils::convertValueToByteArray(quint32 data){
    QByteArray qbatow;

    QDataStream out(&qbatow, QIODevice::WriteOnly | QIODevice::Append);
    out.setByteOrder(QDataStream::BigEndian);

    out << data;
    return qbatow;
}

//Метод для преобразования quint16 в QByteArray
QByteArray Utils::convertValueToByteArray(quint16 data){
    QByteArray qbatow;

    QDataStream out(&qbatow, QIODevice::WriteOnly | QIODevice::Append);
    out.setByteOrder(QDataStream::BigEndian);

    out << data;
    return qbatow;
}

//Метод для преобразования quint8 в QByteArray
QByteArray Utils::convertValueToByteArray(quint8 data){
    QByteArray qbatow;

    QDataStream out(&qbatow, QIODevice::WriteOnly | QIODevice::Append);
    out.setByteOrder(QDataStream::BigEndian);

    out << data;
    return qbatow;
}

//Метод для преобразования QByteArray в quint32
quint32 Utils::convertByteArrayToValue(QByteArray data){
    QByteArray dataJustified = data.rightJustified(4, '\0');
    quint32 value;
    QDataStream s(&dataJustified, QIODevice::ReadWrite);
    s >> value;
    return value;
}

//Создать массив байт на основе команды для отправки
QByteArray Utils::buildCmd(quint8 cmd){
    QByteArray command;
    //Преамбула
    command.append(QByteArray::fromRawData("\xAA\x55", 2));
    //Команда
    command.append(convertValueToByteArray(cmd));
    //CRC8 SMBus
    command.append(CRC::Calculate(command.data(), command.length(), CRC::CRC_8()));
    return command;
}

//Обработать массив байт в модель
Cable Utils::parse(QByteArray input){
    Cable cable;

    quint8 calculatedCRC = CRC::Calculate(input.mid(0, input.length() - 1).data(), input.length() - 1, CRC::CRC_8());
    quint8 CRC = input[input.length() - 1];
    if (CRC != calculatedCRC) return cable;

    //Номер кабеля
    cable.number = Utils::convertByteArrayToValue(input.mid(2, 1));

    //Название кабеля
    switch(cable.number){
    case 0x01:
        cable.name = "НККиПА - МЛИ";
        break;
    case 0x02:
        cable.name = "НККиПА - Плата. перекл.";
        break;
    case 0x03:
        cable.name = "Плата. перекл. 1 - Плата перекл. 2";
        break;
    case 0x04:
        cable.name = "ПКУ - КМ1 (БОБ)";
        break;
    case 0x05:
        cable.name = "ПКУ - КМ2 (БОБ)";
        break;
    case 0x06:
        cable.name = "ПКУ - SD - SC";
        break;
    case 0x07:
        cable.name = "НККиПА - Компенс. дисп.";
        break;
    case 0x08:
        cable.name = "ПКУ - НККиПА (UART)";
        break;
    case 0x09:
        cable.name = "ПКУ - НККиПА (АОМ)";
        break;
    case 0x10:
        cable.name = "ПКУ - НККиПА (БАТТ)";
        break;
    case 0x11:
        cable.name = "ПКУ - НКК - ДОФ (НКК)";
        break;
    case 0x12:
        cable.name = "ПКУ - НКК - ДОФ (ДОФ)";
        break;
    case 0x13:
        cable.name = "ПКУ - НККиПА - АОМ";
        break;
    case 0x14:
        cable.name = "ПКУ - КМ1 (Алиса)";
        break;
    case 0x15:
        cable.name = "Internal_External_fridge";
        break;
    case 0x16:
        cable.name = "ПКУ-НККиПА-АОМ v4.0";
        break;
    case 0x17:
        cable.name = "Ethernet";
        break;
    case 0x18:
        cable.name = "НКК - ОП";
        break;
    }

    //Номер жилы
    quint8 coreNumber = 0;

    //Состояние жил кабеля
    for (int i = 3; i < input.length() - 1; i++){
        //Инкремент номера жилы кабеля
        coreNumber++;

        //Состяние жилы кабеля
        QString state;

        //Состояние - первые 3 бита
        switch (input.at(i) & 0b111) {
        case 0:
            state = "ОК";
            break;
        case 1:
            state = "КЗ";
            break;
        case 2:
            state = "ОБ";
            break;
        case 3:
            state = "НР";
            cable.wrongPinout.insert(coreNumber, input.at(i) >> 3);
            break;
        case 4:
            state = "NC";
            break;
        default:
            state = "";
            break;
        }
        cable.coresState.append(state);
    }

    //Общее состояние кабеля
    if (cable.coresState.contains("ОБ"))
        cable.commonState.append("Обрыв ");
    if (cable.coresState.contains("КЗ"))
        cable.commonState.append("КЗ ");
    if (cable.coresState.contains("НР"))
        cable.commonState.append("НР ");
    if (!cable.coresState.contains("ОБ") && !cable.coresState.contains("КЗ") && !cable.coresState.contains("НР"))
        cable.commonState.append("исправен");

    return cable;
}
