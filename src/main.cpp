#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "Login.hpp"
#include "Manager.hpp"
#include "Child.hpp"
using namespace std;
// struct info
// {
//     string firstName;
//     string lastName;
//     string username;
//     string password;
//     int age;
// };
// enum state
// {
//     MANAGER,
//     CHILD,
//     UNDEFINED_USER

// };
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
    // userData user;
    // ofstream out("./userData.txt");
    // if (!out.is_open())
    // {
    //     cout << "can not open the file" << endl;
    //     exit(EXIT_FAILURE);
    // }
    // for (size_t i = 0; i < 9; i++)
    // {
    //     cout << "user.firstName" << endl;
    //     cin >> setw(20) >> user.firstName;
    //     cout << "user.lastName" << endl;
    //     cin >> setw(20) >> user.lastName;
    //     cout << "user.age" << endl;
    //     cin >> setw(4) >> user.age;
    //     cout << "user.username" << endl;
    //     cin >> setw(15) >> user.username;
    //     cout << "user.password" << endl;
    //     cin >> setw(15) >> user.password;

    //     out << left << setw(20) << user.firstName << setw(20) << user.lastName << setw(4) << user.age << setw(15) << user.username << setw(15) << user.password << endl;
    // }

    // cout << "Hello project!" << endl;

    return 0;
}