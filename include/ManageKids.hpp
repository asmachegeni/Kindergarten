#ifndef MANAGEKIDS_HPP
#define MANAGEKIDS_HPP
#include <string>
#include "Child.hpp"
#include "Login.hpp"
class ManageKids
{
public:
    void addChild();
    void deleteChild(std::string);
    void editChild(std::string);
    void printChild();
    bool searchUser(std::string);

private:
    info user;
    info temp;
};
#endif //MANAGEKIDS_HPP