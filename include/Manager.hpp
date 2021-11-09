#ifndef MANAGER_HPP
#define MANAGER_HPP
#include <string>
class Manager
{
public:
    Manager(std::string, std::string);
    void setFirstName(std::string);
    void setLastName(std::string);
    std::string getFirstName() const;
    std::string getLastName() const;

private:
    std::string FirstName;
    std::string LastName;
};
#endif //MANAGER_HPP
