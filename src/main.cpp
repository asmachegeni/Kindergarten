#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "Login.hpp"
#include "Manager.hpp"
#include "Child.hpp"
#include"ManageKids.hpp"
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
        cout << "manager" << endl;
        cout << login.getFirstName() << endl;
        break;
    case CHILD:
        cout << "child" << endl;
        break;
    case UNDEFINED_USER:
        cout << "UNDEFINED_USER" << endl;
        break;
    }
    return 0;
}