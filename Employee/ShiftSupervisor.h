#include "Employee.h"
#include <iostream>

class Supervisor : public Employee
{
private:
	double salary;
	double bonus;
	int shift;
public:
	Supervisor(std::string, int, std::string, int, double, double);
	void setSalary(double);
	void setBonus(double);
	void setShift(int);
	int getShift();
	double getSalary();
	double getBonus();
};

std::ostream& operator<<(std::ostream& strm, Supervisor& other);