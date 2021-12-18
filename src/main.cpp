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
#include "MatchGame.hpp"
#include "Square.hpp"
#include <stdexcept>
using namespace std;
int main()
{

    Login login;
    string username[3]={"CH5555","TE0710","MA1425"};
    // cin >> username;
    string password[3]={"fffff","14045","Admin"};
    // cin >> password;
    for (int i = 0; i < 3; ++i)
    {
        switch (login.searchUser(username[i], password[i])) {
            case MANAGER: {
                cout << "manager" << endl;
                Manager Ma(login.getFirstName(), login.getLastName());
                cout << Ma.getFirstName();
                ManageKids s;
//                 s.addPerson();
                //  s.deletePerson("CH4623");
                // s.editPerson("CH4623");
                s.printPerson();
                break;
            }
            case CHILD: {
                cout << "child" << endl;
                Child ch(login.getFirstName(), login.getAge());
                //        ch.readFromFile();
                //        ch.doHomework();
                //        ch.setScore();
                //cout<<ch.getScore()<<endl;
                ch.playing();
                break;
            }
            case TEACHER: {
                cout << login.getFirstName() << "   " << login.getLastName() << endl;
                Teacher teach(login.getFirstName(), login.getLastName());
                teach.setHomework();
                break;
            }
            case UNDEFINED_USER:
                cout << "UNDEFINED_USER" << endl;
                break;
        }
    }
    return 0;
}