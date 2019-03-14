#pragma once
#include <string>

class Employee
{
private:
	std::string empName;
	int empNum;
	std::string hireDate;
public:
	Employee(std::string, int, std::string);
	void setEmpName(std::string);
	void setEmpNum(int);
	void setHireDate(std::string);
	std::string getName();
	int getNum();
	std::string getDate();
};

