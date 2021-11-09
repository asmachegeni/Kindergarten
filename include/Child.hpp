#ifndef CHILD_HPP
#define CHILD_HPP
#include <string>
class Child
{
public:
    Child(std::string, int);
    void setFirstName(std::string);
    void setAge(int);
    std::string getFirstName() const;
    int getAge() const;

private:
    std::string FirstName;
    int age;
};
#endif //MANAGER_HPP
