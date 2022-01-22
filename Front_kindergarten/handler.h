#ifndef HANDLER_H
#define HANDLER_H
#include <QObject>
#include <QDebug>
#include"../include/Login.hpp"
#include"../include/Person.hpp"
#include"../include/Manager.hpp"
#include"../include/Teacher.hpp"
#include"../include/Child.hpp"
#include"../include/ManageKids.hpp"


class Handler : public QObject
{
    Q_OBJECT
public:
    explicit Handler(QObject *parent = nullptr);
    Login login;
//    ManageKids manage;
    signals:
    //----------------------------------------------------
    //for login
    void teacher();
    void child();
    void manager();
    void unknown();
    //---------------------------------------------------
public slots:
void loginUser(QString username,QString  password);
};

#endif // HANDLER_H
