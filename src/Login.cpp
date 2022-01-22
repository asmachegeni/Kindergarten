#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "../include/Login.hpp"
#include<stdexcept>
#include<QtDebug>
using namespace std;
//---------------------------------------------------------------------
//---------------------------------------------------------------------
Login::Login()
{
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
Login::~Login()
{
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
state Login::searchUser(string username, string password)
{
    ifstream Data("../build/userData.txt", ios::in); //open file
    if (Data.is_open())
    {
        while (1)
        {
            //read data from file
            Data >> setw(20) >> user.firstName >>
                setw(20) >> user.lastName >>
                setw(4) >> user.age >>
                setw(15) >> user.username >>
                setw(15) >> user.password;
            if (Data.eof())
            {
                break;
            }
            else
            {
                if (user.username == username && user.password == password) //check the password and username
                {
                    if (user.username[0] == 'M' && user.username[1] == 'A') //Check the first two letters of the username
                    {
                        return MANAGER; //user is manager
                    }
                    else if (user.username[0] == 'C' && user.username[1] == 'H')
                    {
                        return CHILD; //user is child
                    }
                    else if (user.username[0] == 'T' && user.username[1] == 'E')
                    {
                        return TEACHER; //user is teacher
                    }
                }
            }
        }
        return UNDEFINED_USER; //user undefined user
    }
    else
    {
        cerr<<"Can not open the file"<<endl;
    }
    return UNDEFINED_USER;//for warning
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
string Login::getFirstName() const
{
    return this->user.firstName;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
string Login::getLastName() const
{
    return this->user.lastName;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
int Login::getAge() const
{
    return this->user.age;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
