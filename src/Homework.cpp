#include <iostream>
#include "../include/Homework.hpp"
#include<stdexcept>
using namespace std;
//-------------------------------------------------------------
//-------------------------------------------------------------
 Homework::Homework(int num1 ,int num2 ,int answer)
{
	setNums(num1,num2);
	setAnswer(answer);
}
//-------------------------------------------------------------
//-------------------------------------------------------------
void Homework::setNums(int num1,int num2)
{
     try {
         if (num1 < 20 && num2 < 20) {
             this->num1 = num1;
             this->num2 = num2;
         } else {
             throw out_of_range("Numbers must be less than 20");
         }
     }
     catch (out_of_range &e)
     {
         cout<<e.what()<<endl;
     }
}
//-------------------------------------------------------------
//-------------------------------------------------------------
int Homework::getNum1()const
{
	return this->num1;
}
//-------------------------------------------------------------
//-------------------------------------------------------------
int Homework::getResult()const
{
	return this->result;
}
//-------------------------------------------------------------
//-------------------------------------------------------------
int Homework::getNum2()const
{
	return this->num2;
}
//-------------------------------------------------------------
//-------------------------------------------------------------
 void Homework::setAnswer(int answer)
{ try {
        if (answer == num1 + num2) {
            this->answer = answer;
        } else {
            throw invalid_argument("You did not enter the sum of the numbers correctly");
        }
    }
    catch (invalid_argument &error)
    {
        cout<<error.what()<<endl;
    }
}
//-------------------------------------------------------------
//-------------------------------------------------------------
int Homework::getAnswer()const
{
	return this->answer;
}
//-------------------------------------------------------------
//-------------------------------------------------------------
 void Homework::setResult(int result)
 {
 	this->result=result;
 }
//-------------------------------------------------------------
//-------------------------------------------------------------
