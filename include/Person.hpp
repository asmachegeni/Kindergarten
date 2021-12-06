#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>
class Person
{
public:
    Person();
    virtual void setFirstName(std::string);
    virtual void setLastName(std::string);
    virtual std::string getFirstName() const;
    virtual std::string getLastName() const;
    virtual void setHomework();
private:
    std::string FirstName;
    std::string LastName;
};
#endif //PERSON_HPP