#include <iostream>
#include "Teacher.hpp"
using namespace std;
//-------------------------------------------------------------
//-------------------------------------------------------------
void Teacher::setHomework()
{
	int num1,num2,answer;
	cin>>num1>>num2>>answer;
 	
 	for (int i = 0; i < child.size(); ++i)
 	{
 		child[i].setHomework(num1 ,num2,answer);
 	}
}
//-------------------------------------------------------------
//-------------------------------------------------------------
