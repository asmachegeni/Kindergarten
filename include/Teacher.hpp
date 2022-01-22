#ifndef TEACHER_HPP
#define TEACHER_HPP
#include<vector>
#include "Person.hpp"
#include"Child.hpp"
class Teacher : public Person
{
public:
	Teacher(std::string,std::string);
	void setHomework();
    void writeToFile(std::string,std::string,int);
private:
};
#endif //TEACHER_HPP
