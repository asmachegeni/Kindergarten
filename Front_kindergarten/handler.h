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
#include"../include/Homework.hpp"

class Handler : public QObject
{
    Q_OBJECT
public:
    explicit Handler(QObject *parent = nullptr);
    Login login;
   int n1;
    int n2;


//    ManageKids manage;
    signals:
    //----------------------------------------------------
    //for login
    void teacher();
    void child();
    void manager();
    void unknown();
    //---------------------------------------------------
    //for teacher
    void  correcthomework();
    void  wronghomewotk();
    //---------------------------------------------------
    //for child
    void  correctdohomework();
    void  wrongdohomework();
    void gameSuccessful();
    void gameUnsuccessful();

public slots:
void loginUser(QString username,QString  password);
void  userteacher(QString num1,QString num2);
int getnum1();
int getnum2();
void setnum1(int);
void setnum2(int);
void doHomework(QString);
void game(int num1 ,int num2);
};

#endif // HANDLER_H
