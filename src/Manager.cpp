#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Manager.hpp"
using namespace std;
//---------------------------------------------------------------------
//---------------------------------------------------------------------
Manager::Manager(string FirstName, string LastName)
{
    setFirstName(FirstName); //call function bacause the FirstName needs validation
    setLastName(LastName);   //call function bacause the FirstName needs validation
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Manager::setFirstName(string FirstName)
{
    int flag = 1;
    for (size_t i = 0; i < FirstName.length(); i++) //Check the firstname because the name must be just a letter
    {
        if (isalpha(FirstName[i]))
        {
            flag = 0;
        }
    }
    if (!flag)
    {
        this->FirstName = FirstName;
    }
    else
    {
        cout << "name is not valid" << endl;
    }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Manager::setLastName(string LastName)
{
    int flag = 1;
    for (size_t i = 0; i < LastName.length(); i++) //Check the lastname because the name must be just a letter
    {
        if (isalpha(LastName[i]))
        {
            flag = 0;
        }
    }
    if (!flag)
    {
        this->LastName = LastName;
    }
    else
    {
        cout << "name is not valid" << endl;
    }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
string Manager::getFirstName() const
{
    return this->FirstName;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
string Manager::getLastName() const
{
    return this->LastName;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------