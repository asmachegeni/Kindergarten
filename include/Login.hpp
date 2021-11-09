#ifndef LOGIN_HPP
#define LOGIN_HPP
#include <string>
//struct for read information'S users
struct info
{
    std::string firstName;
    std::string lastName;
    std::string username;
    std::string password;
    int age;
};
//enum to specify the type of user
enum state
{
    MANAGER,
    CHILD,
    UNDEFINED_USER

};
class Login
{
public:
    Login();
    ~Login();
    state searchUser(std::string, std::string);
    std::string getFirstName() const;
    std::string getLastName() const;

private:
    info user;
};
#endif //LOGIN_HPP