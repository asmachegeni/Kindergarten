#include <iostream>
#include "Teacher.hpp"
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
void Teacher::writeToFile(int num1 ,int num2 ,int answer)
{
    ofstream Home("./Homework.txt", ios::out); //open file
    if (Home.is_open()) {
        Home.clear();
        //write new data in file
        Home << left << setw(3) << num1 << setw(3) << num2 << setw(3) << answer << endl;
        Home.close();
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
    try {
        int num1, num2, answer;
        cin >> num1 >> num2 >> answer;//get number for homework from teacher
        if (num1 < 20 && num2 < 20 && ((num1 + num2) == answer)) {
            writeToFile(num1,num2,answer);

        } else {
            throw invalid_argument("Data is not valid");
        }
    }
    catch (...)
    {

    }
}
//-------------------------------------------------------------
//-------------------------------------------------------------
