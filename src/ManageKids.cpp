#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "../include/ManageKids.hpp"
#include "../include/Child.hpp"
#include "../include/Login.hpp"
#include <stdexcept>

using namespace std;

//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool ManageKids::searchUser(string username) {
    ifstream Data("../build/userData.txt", ios::in); //open file
    if (Data.is_open()) {
        Data.clear(); //to read the correct information from the file
        while (1) {
            //read data from file
            Data >> setw(20) >> user.firstName >>
                 setw(20) >> user.lastName >>
                 setw(4) >> user.age >>
                 setw(15) >> user.username >>
                 setw(15) >> user.password;
            if (Data.eof()) {
                break;
            } else {
                if (user.username == username) {
                    if (user.username[0] == 'C' && user.username[1] == 'H') {
                        cout << "user founded" << endl;
                        Data.close();
                        return true;
                    } else if (user.username[0] == 'T' && user.username[1] == 'E') {
                        cout << "user founded" << endl;
                        Data.close();
                        return true;
                    }
                }
            }
        }
        Data.close();
        return false;
    } else {
        cerr << "Can not open the file!" << endl;
    }
    return false;//for warning
}

//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::addPerson(string firstName,string lastName,int age,string username,string password) {
    ofstream Data("../build/userData.txt", ios::app); //open file
    if (Data.is_open()) {
//        cout << "Enter Firstname:";
//        cin >> temp.firstName;
//        cout << "Enter Lastname:";
//        cin >> temp.lastName;
//        cout << "Enter age:";
//        cin >> temp.age;
//        cout << "Enter username:";
//        cin >> temp.username;
//        cout << "Enter password:";
//        cin >> temp.password;
        if (ValidationUsername(username)) {
            if (!searchUser(username)) {
                if (ValidationName(firstName) && ValidationName(lastName)) {
                    if (ValidationAge(age) && ValidationPassword(password)) {
                        Data.clear();
                        //write new data in file
                        Data << left << setw(20) << firstName
                             << setw(20) << lastName
                             << setw(4) << age
                             << setw(15) << username
                             << setw(15) << password << endl;
                    }
                }
            } else {
//            cout << "username is already in use" << endl;
                throw invalid_argument("username is already in use");
            }
        } else {
//            cout << "Username is not valid" << endl;
            throw invalid_argument("Username is not valid");
        }
    } else {
//       cerr << "Can not open the file!" << endl;
             throw invalid_argument("Can not open the file!");
    }
  // cout << "user added" << endl;
    Data.close();
}


//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::deletePerson(string username) {
//    try {
        if (searchUser(username)) {

            ifstream Data("../build/userData.txt", ios::in); //open file
            if (Data.is_open()) {
                Data.clear();
                ofstream Datacopy("../build/userDatacopy.txt", ios::out); //open new file
                if (!Datacopy.is_open()) {
                    cout << "Can not open the file!!!!!" << endl;
                }

                while (1) {
                    //read data from file
                    Data >> setw(20) >> user.firstName >>
                         setw(20) >> user.lastName >>
                         setw(4) >> user.age >>
                         setw(15) >> user.username >>
                         setw(15) >> user.password;
                    if (Data.eof()) {
                        break;
                    } else {
                        if (user.username != username) {
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
            remove("../build/userData.txt");
            rename("../build/userDatacopy.txt", "../build/userData.txt");
            cout << "user deleted" << endl;
        } else {
            throw invalid_argument("User is not exist");
        }
//    }
//    catch (invalid_argument &e)
//    {
//        cout<<e.what()<<endl;
//    }
}

//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::editPerson(string username,string item,int Selection) {
//    try
//    {
    if (searchUser(username)) {
        fstream Data("../build/userData.txt", ios::in | ios::out); //open file
        if (Data.is_open()) {
            Data.clear();
            ofstream Datacopy("../build/userDatacopy.txt", ios::out); //open new file
            if (!Datacopy.is_open()) {
                cout << "Can not open the file!!!!!" << endl;
            }
            while (1) {
                //read data from file
                Data >> setw(20) >> user.firstName >>
                     setw(20) >> user.lastName >>
                     setw(4) >> user.age >>
                     setw(15) >> user.username >>
                     setw(15) >> user.password;
                if (Data.eof()) {
                    break;
                } else {
                    if (user.username == username) {
//                        cout << "What do you want to change?" << endl;
//                        cout << "1:Username" << endl;
//                        cout << "2:Password" << endl;
//                        cout << "3:Firstname" << endl;
//                        cout << "4:Lastname" << endl;
//                        cout << "5:Age" << endl;
//                       int Selection; //to receive user selection
//                        cin >> Selection;
//                        string change;
//                        int age;
                        switch (Selection) {
                            case 0: {
//                                cin >> change;
                                if (ValidationUsername(item)) {
                                    user.username = item;
                                } else {
//                                    cout << "user deleted" << endl;
                                    throw invalid_argument("error");
                                }
                                break;
                            }
                            case 1: {
//                                cin >> change;
                                if (ValidationPassword(item)) {
                                    user.password = item;
                                }
                               else {
                                    throw invalid_argument("error");
                                }
                                break;
                            }
                            case 2: {
//                                cin >> change;
                                if (ValidationName(item)) {
                                    user.firstName = item;
                                }
                                else {
                                     throw invalid_argument("error");
                                 }
                                break;
                            }
                            case 3: {
//                                cin >> change;
                                if (ValidationName(item)) {
                                    user.lastName = item;
                                }
                                else {
                                     throw invalid_argument("error");
                                 }
                                break;
                            }
                            case 4: {
//                                cin >> age;
                            int age=stoi(item);
                                if (ValidationAge(age)) {
                                    user.age = age;
                                }
                                else {
                                     throw invalid_argument("error");
                                 }
                                break;
                            }
                            default: {
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
                    } else {
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
        remove("../build/userData.txt");
        rename("../build/userDatacopy.txt", "../build/userData.txt");
    } else {
        throw invalid_argument("User is not exist");
    }
//}
//    catch (invalid_argument &e)
//    {
//        cout<<e.what()<<endl;
//    }

}

//---------------------------------------------------------------------
//---------------------------------------------------------------------
void ManageKids::printPerson() {
    ifstream Data("../build/userData.txt", ios::in); //open file
    if (Data.is_open()) {

        while (1) {
            //read data from file
            Data >> setw(20) >> user.firstName >>
                 setw(20) >> user.lastName >>
                 setw(4) >> user.age >>
                 setw(15) >> user.username >>
                 setw(15) >> user.password; //read data from file

            if (Data.eof()) {
                break;
            } else {
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
    } else {
        cerr << "Can not open the file!" << endl;
    }
    Data.close();
}

//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool ManageKids::ValidationName(string name) {
    for (size_t i = 0; i < name.length(); i++) //Check the name because the name must be just a letter
    {
        if (!isalpha(name[i])) {
            return false;
        }
    }
    return true;
}

//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool ManageKids::ValidationAge(int age) {
    if (age < 7 && age > 3) //Check the age must be less than 7 and more than 3
    {
        return true;
    }
    return false;
}

//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool ManageKids::ValidationPassword(string password) {
    if (password.length() > 3 && password.length() < 11) {
        return true;
    }
    return false;
}

//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool ManageKids::ValidationUsername(string username) {
    if (username[0] == 'C' && username[1] == 'H' && username.length() == 6) {
        return true;
    } else if (username[0] == 'T' && username[1] == 'E' && username.length() == 6) {
        return true;
    }
    return false;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
