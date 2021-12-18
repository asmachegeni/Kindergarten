#ifndef CHILD_HPP
#define CHILD_HPP
#include <string>
#include "Person.hpp"
#include"Homework.hpp"
#include "MatchGame.hpp"
class Child : public Person
{
public:
    Child(std::string, int);
    void setAge(int);
    int getAge() const;
    void setHomework(int ,int ,int);
    void doHomework();
    void setScore(int);
    int getScore()const;
    void readFromFile();
    void playing();
private:
    int age;
    Homework * homework;
    MatchGame * matchGame;
    int score=0;
};
#endif //MANAGER_HPP
