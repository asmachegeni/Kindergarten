#include "handler.h"

Handler::Handler(QObject *parent) : QObject(parent)
{

}
//--------------------------------------------------------------
//--------------------------------------------------------------
void Handler::loginUser(QString username,QString  password)
{

    switch (login.searchUser(username.toStdString(),password.toStdString()) )
    {
        case MANAGER:
        {
            emit manager();
        Manager manager(login.getFirstName(),login.getLastName());

            break;
        }
        case TEACHER:
        {
            emit teacher();


             break;
        }
        case CHILD:
        {
            emit child();
             break;
        }
        case UNDEFINED_USER:
        {
            emit unknown();
             break;
        }
    }
}
//--------------------------------------------------------------
//--------------------------------------------------------------
void  Handler::userteacher(QString num1,QString num2)
{
//    qDebug()<<num1.toInt();
//    qDebug()<<num2.toInt();
    Teacher teacher(login.getFirstName(),login.getLastName());
    int answer=num1.toInt()+num2.toInt();
    try {
        teacher.writeToFile(num1.toStdString(),num2.toStdString(),answer);
        emit correcthomework();
    } catch (...) {
        emit wronghomewotk();

    }

}
//--------------------------------------------------------------
//--------------------------------------------------------------
