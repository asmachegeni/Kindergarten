#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "Login.hpp"
#include "Manager.hpp"
#include "Child.hpp"
#include "ManageKids.hpp"
using namespace std;
int main()
{

    Login login;
    string username;
    cin >> username;
    string password;
    cin >> password;

    switch (login.searchUser(username, password))
    {
    case MANAGER:
    {
        cout << "manager" << endl;
        Manager Ma(login.getFirstName(), login.getLastName());
        ManageKids s;
        s.addChild();
        // s.deletChil("CH2614");
        // s.editChild("CH4623");
        // s.printChild();
        cout << login.getFirstName() << endl;
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