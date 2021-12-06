#ifndef TEACHER_HPP
#define TEACHER_HPP
#include<vector>
#include "Person.hpp"
#include"Child.hpp"
class Teacher : public Person
{
public:
	void setHomework();
private:
	std::vector<Child>child;
	
};
#endif //TEACHER_HPP