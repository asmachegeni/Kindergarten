#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "Login.hpp"
#include "Manager.hpp"
#include "Child.hpp"
#include "ManageKids.hpp"
#include "Person.hpp"
#include "Homework.hpp"
#include "Teacher.hpp"
using namespace std;
int main()
{

    Login login;
    string username;
    // cin >> username;
    string password;
    // cin >> password;

    switch (login.searchUser("MA1425", "Admin"))
    {
    case MANAGER:
    {
        // cout << "manager" << endl;
        Manager Ma(password, username);
        // ManageKids s;
        // // s.addChild();
        // //  s.deleteChild("CH4623");
        // // s.editChild("CH4623");
        // cout << "\n ------------------------------------------------------\n";
        // s.printChild();
        break;
    }
    case CHILD:
    {
        Child ch(login.getFirstName(), login.getAge());
        cout << "child" << endl;
        break;
    }
    case UNDEFINED_USER:
        cout << "UNDEFINED_USER" << endl;
        break;
    }
    return 0;
}