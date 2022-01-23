#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include<stdexcept>
#include "../include/Child.hpp"
using namespace std;
void Child::readFromFile()
{
    ifstream Home("../build/Homework.txt", ios::in); //open file
    if (Home.is_open()) {
//        int num1,num2,answer;
        Home.clear();
        //write new data in file
        Home >>setw(3) >> num1 >> setw(3) >>num2 >> setw(3) >> answer ;
//        cout<<num1<<endl;
//        cout<<num2<<endl;
//        cout<<answer<<endl;
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
    try {
        if (age < 7 && age > 3) //Check the age must be less than 7 and more than 3
        {
            this->age = age;
        } else {
            throw out_of_range("Age is not Valid!");
        }
    }
    catch (invalid_argument &e)
    {
        cout<<e.what()<<endl;
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
void Child::doHomework(int result)
{
//    readFromFile();
//    cout<<homework->getNum1()<<" + "<<homework->getNum2()<<" = ";
//    int result;
//    cin>>result;//get answer from child
    homework->setResult(result);
    setScore(result);
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Child::setScore(int result)
{

//        cout << "Answer :" << homework->getAnswer();
        if (result == homework->getAnswer())//check result for setScore if result is correct
        {
//            cout << "you answer is correct!" << endl;
            score += 20;
        } else {
            throw invalid_argument("The answer is not correct");
   }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
int Child::getScore()const
{
    return this->score;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Child::playing()
{
    cout<<"Game Started!"<<endl;
    int num1,num2;
    matchGame=new MatchGame;
    matchGame->setSquares();
    for (int i = 0; i < 6; ++i)
    {
        cout<<"Enter num1 AND num2 :  ";
        cin>>num1>>num2;
        matchGame->checkUrl(num1,num2);
    }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
int Child::getNum1()const
{
    return  this->num1;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
int Child::getNum2()const
{
    return this->num2;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
int Child:: getAnswer()const
{
    return this->answer;
}
