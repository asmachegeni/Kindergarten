#ifndef MANAGEKIDS_HPP
#define MANAGEKIDS_HPP
#include <string>
#include "Child.hpp"
#include "Login.hpp"
class ManageKids
{
public:
    void addPerson(std::string,std::string,int,std::string,std::string);
    void deletePerson(std::string);
    void editPerson(std::string,std::string,int);
    void printPerson();
    bool searchUser(std::string);
    bool ValidationName(std::string);
    bool ValidationAge(int);
    bool ValidationPassword(std::string);
    bool ValidationUsername(std::string);

private:
    info user;
    info temp;
};
#endif //MANAGEKIDS_HPP
