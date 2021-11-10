#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "ManageKids.hpp"
#include "Child.hpp"
#include "Login.hpp"
using namespace std;
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::addChild()
{
    ofstream Data("./userData.txt", ios::app); //open file
    if (Data.is_open())
    {
        cout << "Enter Firstname:";
        cin >> user.firstName;
        cout << "Enter Lastname:";
        cin >> user.lastName;
        cout << "Enter age:";
        cin >> user.age;
        cout << "Enter username:";
        cin >> user.username;
        cout << "Enter password:";
        cin >> user.password;
        if (user.username[0] == 'C' && user.username[1] == 'H' && user.username.length() == 6)
        {
            Data << left << setw(20) << user.firstName << setw(20) << user.lastName << setw(4) << user.age << setw(15) << user.username << setw(15) << user.password; //read data from file
        }
        else
        {
            cout << "Username is not valid" << endl;
        }
    }
    cout << "user added" << endl;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::deletChil(string username)
{
    ifstream Data("./userData.txt", ios::in); //open file
    if (Data.is_open())
    {
        ofstream Datacopy("./userDatacopy.txt", ios::out); //open file
        if (!Datacopy.is_open())
        {
            cout << "Can not open the file!!!!!" << endl;
        }

        while (1)
        {
            Data >> setw(20) >> user.firstName >> setw(20) >> user.lastName >> setw(4) >> user.age >> setw(15) >> user.username >> setw(15) >> user.password; //read data from file
            if (Data.eof())
            {
                break;
            }
            else
            {
                if (user.username != username)
                {
                    Datacopy << setw(20) << user.firstName << setw(20) << user.lastName << setw(4) << user.age << setw(15) << user.username << setw(15) << user.password << endl; //read data from file
                }
            }
        }
        Datacopy.close();
    }
    Data.close();
    remove("./userData.txt");
    rename("./userDatacopy.txt", "./userData.txt");
    cout << "user deleted" << endl;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::editChild(string username)
{
    int flag = 0;
    fstream Data("./userData.txt", ios::in | ios::out); //open file
    if (Data.is_open())
    {
        ofstream Datacopy("./userDatacopy.txt", ios::out); //open file
        if (!Datacopy.is_open())
        {
            cout << "Can not open the file!!!!!" << endl;
        }
        while (1)
        {
            Data >> setw(20) >> user.firstName >> setw(20) >> user.lastName >> setw(4) >> user.age >> setw(15) >> user.username >> setw(15) >> user.password; //read data from file
            if (Data.eof())
            {
                break;
            }
            else
            {
                if (user.username == username)
                {
                    cout << "What do you want to change?" << endl;
                    cout << "1:Username" << endl;
                    cout << "2:Password" << endl;
                    cout << "3:Firstname" << endl;
                    cout << "4:Lastname" << endl;
                    cout << "5:Age" << endl;
                    char Selection;
                    cin >> Selection;
                    string change;
                    int age;
                    switch (Selection)
                    {
                    case 1:
                        cin >> change;
                        if (change[0] == 'C' && change[1] == 'H' && change.length() == 5)
                        {
                            user.username = change;
                        }
                        else
                        {
                            cout << "user deleted" << endl;
                        }
                        break;
                    case 2:
                        cin >> change;
                        user.password = change;
                        break;
                    case 3:
                        cin >> change;
                        user.firstName = change;
                        break;
                    case 4:
                        cin >> change;
                        user.lastName = change;
                        break;
                    case 5:
                        cin >> age;
                        user.age = age;
                        break;
                    default:
                        cout << "command not found!!!!!" << endl;
                        break;
                    }
                    flag = 1;
                    Datacopy << left << setw(20) << user.firstName << setw(20) << user.lastName << setw(4) << user.age << setw(15) << user.username << setw(15) << user.password << endl; //read data from file
                }
                else
                {
                    Datacopy << left << setw(20) << user.firstName << setw(20) << user.lastName << setw(4) << user.age << setw(15) << user.username << setw(15) << user.password << endl; //read data from file
                }
            }
        }
        Datacopy.close();
    }
    if (!flag)
    {
        cout << "user not found!!!!" << endl;
    }
    Data.close();
    remove("./userData.txt");
    rename("./userDatacopy.txt", "./userData.txt");
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::printChild()
{
    ifstream Data("./userData.txt", ios::in); //open file
    if (Data.is_open())
    {
        //----------debug------//
        // cout << "file is open" << endl;
        while (1)
        {
            Data >> setw(20) >> user.firstName >> setw(20) >> user.lastName >> setw(4) >> user.age >> setw(15) >> user.username >> setw(15) >> user.password; //read data from file

            if (Data.eof())
            {
                break;
            }
            else
            {
                if (user.username != "MA1425")
                {
                    cout << left << setw(20) << user.firstName << setw(20) << user.lastName << setw(4) << user.age << setw(15) << user.username << setw(15) << user.password << endl; //read data from file
                }
            }
        }
    }
    Data.close();
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------