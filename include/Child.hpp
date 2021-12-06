#ifndef CHILD_HPP
#define CHILD_HPP
#include <string>
#include "Person.hpp"
#include"Homework.hpp"

class Child : public Person
{
public:
    Child(std::string, int);
    void setAge(int);
    int getAge() const;
    void setHomework(int ,int ,int);
    Homework *getHomework()const;
    void doHomework();
    void setScore(int);


private:
    int age;
    Homework * homework;
    int score=0;
};
#endif //MANAGER_HPP
