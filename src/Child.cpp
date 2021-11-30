#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Child.hpp"
using namespace std;
//---------------------------------------------------------------------
//---------------------------------------------------------------------
Child::Child(string FirstName, int age)
{
    setFirstName(FirstName); //call function bacause the name needs validation
    setAge(age);             //call function bacause the age needs validation
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Child::setAge(int age)
{
    if (age < 7 && age > 3) //Check the age must be less than 7 and more than 3
    {
        this->age = age;
    }
    else
    {
        cout << "Age not valid" << endl;
    }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
int Child::getAge() const
{
    return this->age;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------