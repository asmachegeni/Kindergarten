#include <iostream>
#include "../include/Teacher.hpp"
#include<string>
#include<fstream>
#include<iomanip>
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
void Teacher::writeToFile(string num1 ,string num2 ,int answer)
{

    ofstream Home("../build/Homework.txt", ios::out); //open file
    if (Home.is_open()) {
        Home.clear();
        for(size_t i=0;i<num1.size();i++)
        {
            if(!isdigit(num1[i]))
            {
                throw invalid_argument("Data is not valid");
            }

        }
        for(size_t i=0;i<num2.size();i++)
        {
            if(!isdigit(num2[i]))
            {
                throw invalid_argument("Data is not valid");
            }

        }
        int number1=stoi(num1);
          int number2=stoi(num2);
        if(number1 < 20 && number2 < 20 && ((number1 + number2) == answer))
        {
        //write new data in file
        Home << left << setw(3) << number1 << setw(3) << number2 << setw(3) << answer << endl;
        Home.close();
    }
        else
        {
             throw invalid_argument("Data is not valid");
        }
    }
    else
    {
        cerr << "Can not open the file!" << endl;
    }

}
//-------------------------------------------------------------
//-------------------------------------------------------------
void Teacher::setHomework()
{
//    try {
//          cout<<"Enter num1 ,num2 ,answer : ";
//        int num1, num2, answer;
//        cin >> num1 >> num2 >> answer;//get number for homework from teacher
//        if (num1 < 20 && num2 < 20 && ((num1 + num2) == answer)) {
//            writeToFile(num1,num2,answer);
         cout<<" set homework "<<endl;

//        } else {
//            throw invalid_argument("Data is not valid");
//        }
//    }
//    catch (invalid_argument &e)
//    {
//        cout<<e.what()<<endl;
//    }
}
//-------------------------------------------------------------
//-------------------------------------------------------------
