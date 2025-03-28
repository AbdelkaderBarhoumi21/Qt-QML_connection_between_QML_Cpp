#include "backendhelper.h"


backendHelper::backendHelper(QObject *parent)
    : QObject{parent}
{}

void backendHelper::printText(){
    qDebug()<<"Back end called";

}

QString backendHelper::getData()
{
    return QDateTime::currentDateTime().toString();

}
