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
    void doHomework();

private:
    int age;
    Homework * homework;
};
#endif //MANAGER_HPP
