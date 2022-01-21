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
