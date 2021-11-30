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