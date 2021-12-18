#include <iostream>
#include "person.hpp"
#include <stdexcept>
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
    try {
        if (!flag) {
            this->FirstName = FirstName;
        } else {
            throw invalid_argument("name is not valid");
        }
    }
    catch (invalid_argument &e)
    {
        cout<<e.what()<<endl;
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
    try {
        if (!flag) {
            this->LastName = LastName;
        } else {
            throw invalid_argument("name is not valid");
        }
    }
    catch (invalid_argument &e)
    {
        cout<<e.what()<<endl;
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
//---------------------------------------------------------------------
//---------------------------------------------------------------------
