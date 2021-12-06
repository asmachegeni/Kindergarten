#ifndef HOMEWORK_HPP
#define HOMEWORK_HPP
class Homework
{
public:
	 Homework(int ,int ,int);
	 void setNums(int ,int);
	 int getNum1()const;
	 int getNum2()const;
	 void setResult(int);
	 int getResult()const;
	 void setAnswer(int);
	 int getAnswer()const;
private:
	int num1;
	int num2;
	int answer;
	int result;
};
#endif //HOMEWORK_HPP