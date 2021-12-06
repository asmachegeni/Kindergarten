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
        Data.clear(); //to read the correct information from the file
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
                if (user.username == username)
                {
                    if (user.username[0] == 'C' && user.username[1] == 'H')
                    {
                        cout << "user founded" << endl;
                        Data.close();
                        return true;
                    }
                    else if (user.username[0] == 'T' && user.username[1] == 'E')
                    {
                        cout << "user founded" << endl;
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
void ManageKids::addPerson()
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
        if (ValidationUsername(temp.username))
        {
            if (!searchUser(temp.username))
            {
                if (ValidationName(temp.firstName) && ValidationName(temp.lastName))
                {
                    if (ValidationAge(temp.age) && ValidationPassword(temp.password))
                    {
                        Data.clear();
                        //write new data in file
                        Data << left << setw(20) << temp.firstName
                             << setw(20) << temp.lastName
                             << setw(4) << temp.age
                             << setw(15) << temp.username
                             << setw(15) << temp.password << endl;
                    }
                }
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
void ManageKids::deletePerson(string username)
{
    if (searchUser(username))
    {

        ifstream Data("./userData.txt", ios::in); //open file
        if (Data.is_open())
        {
            Data.clear();
            ofstream Datacopy("./userDatacopy.txt", ios::out); //open new file
            if (!Datacopy.is_open())
            {
                cout << "Can not open the file!!!!!" << endl;
            }

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
                    if (user.username != username)
                    {
                        //write data in new file
                        Datacopy << setw(20) << user.firstName
                                 << setw(20) << user.lastName
                                 << setw(4) << user.age
                                 << setw(15) << user.username
                                 << setw(15) << user.password << endl;
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
void ManageKids::editPerson(string username)
{
    if (searchUser(username))
    {
        fstream Data("./userData.txt", ios::in | ios::out); //open file
        if (Data.is_open())
        {
            Data.clear();
            ofstream Datacopy("./userDatacopy.txt", ios::out); //open new file
            if (!Datacopy.is_open())
            {
                cout << "Can not open the file!!!!!" << endl;
            }
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
                    if (user.username == username)
                    {
                        cout << "What do you want to change?" << endl;
                        cout << "1:Username" << endl;
                        cout << "2:Password" << endl;
                        cout << "3:Firstname" << endl;
                        cout << "4:Lastname" << endl;
                        cout << "5:Age" << endl;
                        int Selection; //to receive user selection
                        cin >> Selection;
                        string change;
                        int age;
                        switch (Selection)
                        {
                        case 1:
                        {
                            cin >> change;
                            if (ValidationUsername(change))
                            {
                                user.username = change;
                            }
                            else
                            {
                                cout << "user deleted" << endl;
                            }
                            break;
                        }
                        case 2:
                        {
                            cin >> change;
                            if (ValidationPassword(change))
                            {
                                user.password = change;
                            }
                            break;
                        }
                        case 3:
                        {
                            cin >> change;
                            if (ValidationName(change))
                            {
                                user.firstName = change;
                            }
                            break;
                        }
                        case 4:
                        {
                            cin >> change;
                            if (ValidationName(change))
                            {
                                user.lastName = change;
                            }
                            break;
                        }
                        case 5:
                        {
                            cin >> age;
                            if (ValidationAge(age))
                            {
                                user.age = age;
                            }
                            break;
                        }
                        default:
                        {
                            cout << "command not found!!!!!" << endl;
                            break;
                        }
                        }
                        Datacopy << left << setw(20) << user.firstName
                                 << setw(20) << user.lastName
                                 << setw(4) << user.age
                                 << setw(15) << user.username
                                 << setw(15) << user.password
                                 << endl; //read data from file
                    }
                    else
                    {
                        Datacopy << left << setw(20) << user.firstName
                                 << setw(20) << user.lastName
                                 << setw(4) << user.age
                                 << setw(15) << user.username
                                 << setw(15) << user.password << endl; //read data from file
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
void ManageKids::printPerson()
{
    ifstream Data("./userData.txt", ios::in); //open file
    if (Data.is_open())
    {

        while (1)
        {
            //read data from file
            Data >> setw(20) >> user.firstName >>
                setw(20) >> user.lastName >>
                setw(4) >> user.age >>
                setw(15) >> user.username >>
                setw(15) >> user.password; //read data from file

            if (Data.eof())
            {
                break;
            }
            else
            {
                if (user.username != "MA1425") //to not print manager information
                {
                    cout << left << setw(20) << user.firstName
                         << setw(20) << user.lastName
                         << setw(4) << user.age
                         << setw(15) << user.username
                         << setw(15) << user.password << endl; //read data from file
                }
            }
        }
    }
    Data.close();
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool ManageKids::ValidationName(string name)
{
    for (size_t i = 0; i < name.length(); i++) //Check the name because the name must be just a letter
    {
        if (!isalpha(name[i]))
        {
            return false;
        }
    }
    return true;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool ManageKids::ValidationAge(int age)
{
    if (age < 7 && age > 3) //Check the age must be less than 7 and more than 3
    {
        return true;
    }
    return false;
}

//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool ManageKids::ValidationPassword(string password)
{
    if (password.length() > 3 && password.length() < 11)
    {
        return true;
    }
    return false;
}

//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool ManageKids::ValidationUsername(string username)
{
    if (username[0] == 'C' && username[1] == 'H' && username.length() == 6)
    {
        return true;
    }
    else if (username[0] == 'T' && username[1] == 'E' && username.length() == 6)
    {
        return true;
    }
    return false;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------