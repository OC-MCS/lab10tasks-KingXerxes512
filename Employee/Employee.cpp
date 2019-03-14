#include "Employee.h"
#include <string>

Employee::Employee(std::string name, int num, std::string date)
{
	setEmpName(name);
	setEmpNum(num);
	setHireDate(date);
}

void Employee::setEmpName(std::string name)
{
	empName = name;
}

void Employee::setEmpNum(int num)
{
	empNum = num;
}

void Employee::setHireDate(std::string date)
{
	hireDate = date;
}

std::string Employee::getName()
{
	return empName;
}

int Employee::getNum()
{
	return empNum;
}

std::string Employee::getDate()
{
	return hireDate;
}
