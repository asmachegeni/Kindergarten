#include <iostream>
#include "Teacher.hpp"
#include<string>
using namespace std;
//-------------------------------------------------------------
//-------------------------------------------------------------
Teacher::Teacher(string FirstName, string LastName)
{
    setFirstName(FirstName); //call function bacause the FirstName needs validation
    setLastName(LastName);   //call function bacause the FirstName needs validation
}
//-------------------------------------------------------------
//-------------------------------------------------------------
void Teacher::setHomework()
{
	int num1,num2,answer;
	cin>>num1>>num2>>answer;//get number for homework from teacher
 	
 	for (int i = 0; i < child.size(); ++i)
 	{
 		child[i].setHomework(num1 ,num2,answer);
 	}
}
//-------------------------------------------------------------
//-------------------------------------------------------------
