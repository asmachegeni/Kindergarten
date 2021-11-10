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
bool ManageKids::searchUser(string username)
{

    ifstream Data("./userData.txt", ios::in); //open file
    if (Data.is_open())
    {
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
                    if (user.username[0] == 'C' && user.username[1] == 'H')
                    {
                        Data.close();
                        return true;
                    }
                }
            }
        }
        Data.close();
        return false;
    }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::addChild()
{
    ofstream Data("./userData.txt", ios::app); //open file
    if (Data.is_open())
    {
        cout << "Enter Firstname:";
        cin >> temp.firstName;
        cout << "Enter Lastname:";
        cin >> temp.lastName;
        cout << "Enter age:";
        cin >> temp.age;
        cout << "Enter username:";
        cin >> temp.username;
        cout << "Enter password:";
        cin >> temp.password;
        if (temp.username[0] == 'C' && temp.username[1] == 'H' && temp.username.length() == 6)
        {
            if (!searchUser(temp.username))
            {
                Data.clear();
                // Data.seekp(0, ios::end);
                Data
                    << left << setw(20) << temp.firstName << setw(20) << temp.lastName << setw(4) << temp.age << setw(15) << temp.username << setw(15) << temp.password << endl;
                //read data from file
            }
            else
            {
                cout << "username is already in use" << endl;
            }
        }
        else
        {
            cout << "Username is not valid" << endl;
        }
    }
    cout << "user added" << endl;
    Data.close();
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::deletChild(string username)
{
    if (searchUser(user.username))
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
    else
    {
        cout << "user is not exist" << endl;
    }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::editChild(string username)
{
    if (searchUser(user.username))
    {
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
        Data.close();
        remove("./userData.txt");
        rename("./userDatacopy.txt", "./userData.txt");
    }
    else
    {
        cout << "user is not exist" << endl;
    }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::printChild()
{
    ifstream Data("./userData.txt", ios::in); //open file
    if (Data.is_open())
    {

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