#ifndef MANAGEKIDS_HPP
#define MANAGEKIDS_HPP
#include <string>
#include "Child.hpp"
#include "Login.hpp"
class ManageKids
{
public:
    void addChild();
    void deletChil(std::string);
    void editChild(std::string);
    void printChild();

private:
    info information;
};
#endif //MANAGEKIDS_HPP