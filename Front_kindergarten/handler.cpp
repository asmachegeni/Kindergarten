#include "handler.h"
#include<fstream>
Handler::Handler(QObject *parent) : QObject(parent)
{
    Child ch(login.getFirstName(),5);
    ch.readFromFile();
    setnum1(ch.getNum1());
    setnum2(ch.getNum2());
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
//        Child ch(login.getFirstName(),5);
//        setnum1(ch.getNum1());
//        setnum2(ch.getNum2());
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
void Handler::doHomework(QString answer)
{
    Child ch(login.getFirstName(),5);
    ch.readFromFile();
//    setnum1(ch.getNum1());
//    setnum2(ch.getNum2());
    try {
        ch.doHomework(answer.toInt());
        emit correctdohomework();
    } catch (...) {
        emit wrongdohomework();
    }

}
//--------------------------------------------------------------
//--------------------------------------------------------------
void Handler::setnum1(int n1)
{
//    QString s = QString::number(n1);
    this->n1=n1;
}
//--------------------------------------------------------------
//--------------------------------------------------------------
void Handler::setnum2(int n2)
{
this->n2=n2;
}
//--------------------------------------------------------------
//--------------------------------------------------------------
int Handler::getnum1()
{
    return  this->n1;
}
//--------------------------------------------------------------
//--------------------------------------------------------------
int Handler::getnum2()
{
    return  this->n2;
}
//--------------------------------------------------------------
//--------------------------------------------------------------
