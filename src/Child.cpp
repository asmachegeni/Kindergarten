#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include<stdexcept>
#include "Child.hpp"
using namespace std;
void Child::readFromFile()
{
    ifstream Home("./Homework.txt", ios::in); //open file
    if (Home.is_open()) {
        int num1,num2,answer;
        Home.clear();
        //write new data in file
        Home >>setw(3) >> num1 >> setw(3) >>num2 >> setw(3) >> answer ;
        setHomework(num1,num2,answer);
        Home.close();
    }
    else
    {
        cerr << "Can not open the file!" << endl;
    }
}
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
        throw out_of_range("Age is not Valid!");
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
void Child::setHomework(int num1 ,int num2  ,int answer)
{
    homework =new Homework(num1 ,num2,answer);

}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Child::doHomework()
{
    cout<<homework->getNum1()<<" + "<<homework->getNum2()<<" = ";
    int result;
    cin>>result;
    homework->setResult(result);
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Child::setScore(int result)
{
    if(result==homework->getAnswer())
    {
        score+=20;
    } else
    {
        throw invalid_argument("The answer is not correct");
    }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------