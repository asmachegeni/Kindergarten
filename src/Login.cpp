#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Login.hpp"
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
    ifstream Data("./userData.txt", ios::in); //open file
    if (Data.is_open())
    {
        //----------debug------//
        // cout << "file is open" << endl;
        while (1)
        {
            Data >> setw(20) >> user.firstName >> setw(20) >> user.lastName >> setw(4) >> user.age >> setw(15) >> user.username >> setw(15) >> user.password; //read data from file
            //----------debug------//
            // cout << left << setw(20) << user.firstName << setw(20) << user.lastName << setw(4) << user.age << setw(15) << user.username << setw(15) << user.password << endl;
            if (Data.eof())
            {
                //----------debug------//
                // cout << "end of file" << endl;
                break;
            }
            else
            {
                //----------debug------//
                // cout << "in else" << endl;
                // cout << user.username << endl;
                if (user.username == username && user.password == password)
                {
                    //----------debug------//
                    // cout << "founded!!!!" << endl;
                    // cout << user.username << endl;
                    if (user.username[0] == 'M' && user.username[1] == 'A') //Check the first two letters of the username
                    {
                        return MANAGER;
                    }
                    else if (user.username[0] == 'C' && user.username[1] == 'H')
                    {
                        return CHILD;
                    }
                }
            }
            // Data.clear();
        }
        return UNDEFINED_USER;
    }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
string Login::getFirstName()
{
    return user.firstName;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
string Login::getLastName()
{
    return user.lastName;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------