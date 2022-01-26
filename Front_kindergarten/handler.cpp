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
void Handler::game(int num1,int num2)
{

  Child child(login.getFirstName(),5);
  try {
    child.playing(num1,num2);
      emit gameSuccessful();   
  } catch (...) {      
      emit gameUnsuccessful();
  }
}
//--------------------------------------------------------------
//--------------------------------------------------------------
void Handler::deleteuser(QString username)
{
    try {
         manage.deletePerson(username.toStdString());
         emit  deleteSuccessful();

    } catch (...) {
        emit deleteUnsuccessful();
    }
}
//--------------------------------------------------------------
//--------------------------------------------------------------
void Handler::adduser(QString firstname,QString lastname,QString age,QString username,QString password)
{
    try {
        manage.addPerson(firstname.toStdString(),lastname.toStdString(),age.toInt(),username.toStdString(),password.toStdString());
        emit addSuccessful();


    } catch (...) {
        emit addUnsuccessful();


    }
}
//--------------------------------------------------------------
//--------------------------------------------------------------
void  Handler::edituser(QString username,QString item,int selection)
{
    try {
            manage.editPerson(username.toStdString(),item.toStdString(),selection);
       emit editSuccessful();

    } catch (...) {
          emit editUnsuccessful();
    }
}
//--------------------------------------------------------------
//--------------------------------------------------------------
