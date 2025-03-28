#ifndef BACKENDHELPER_H
#define BACKENDHELPER_H

#include <QObject>
#include<QDebug>
#include<QDateTime>

class backendHelper : public QObject
{
    Q_OBJECT
public:
    explicit backendHelper(QObject *parent = nullptr);
    Q_INVOKABLE void printText();
    Q_INVOKABLE QString getData();

signals:
};

#endif // BACKENDHELPER_H
