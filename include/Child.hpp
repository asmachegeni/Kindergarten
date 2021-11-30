#ifndef CHILD_HPP
#define CHILD_HPP
#include <string>
#include "Person.hpp"
class Child : public Person
{
public:
    Child(std::string, int);
    void setAge(int);
    int getAge() const;

private:
    int age;
};
#endif //MANAGER_HPP
