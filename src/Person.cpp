#include <iostream>
#include "person.hpp"
using namespace std;
//---------------------------------------------------------------------
//---------------------------------------------------------------------
Person::Person()
{
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Person::setFirstName(string FirstName)
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
void Person::setLastName(string LastName)
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
string Person::getFirstName() const
{
    return this->FirstName;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
string Person::getLastName() const
{
    return this->LastName;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Person::setHomework()
{

}

