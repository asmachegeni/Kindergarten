#include <iostream>
#include "Homework.hpp"
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
	if(num1<20 && num2<20)
	{
		this->num1=num1;
		this->num2=num2;
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
{
	if(answer==num1+num2)
	{
		this->answer=answer;
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

