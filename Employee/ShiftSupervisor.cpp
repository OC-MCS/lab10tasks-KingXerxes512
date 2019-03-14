#include "ShiftSupervisor.h"
#include <iostream>

Supervisor::Supervisor(std::string name, int num, std::string date, int shift, double pay, double bonus) : Employee(name, num, date)
{
	setShift(shift);
	setSalary(pay);
	setBonus(bonus);
}

void Supervisor::setSalary(double pay)
{
	salary = pay;
}

void Supervisor::setBonus(double bonus)
{
	this->bonus = bonus;
}

void Supervisor::setShift(int shift)
{
	this->shift = shift;
}

int Supervisor::getShift()
{
	return shift;
}

double Supervisor::getSalary()
{
	return salary;
}

double Supervisor::getBonus()
{
	return bonus;
}

std::ostream& operator<<(std::ostream& strm, Supervisor& other)
{
	strm << "Employee Name: " << other.getName() << "\nEmployee Number: " << other.getNum() << "\nHire Date: "
		<< other.getDate() << "\nShift: " << other.getShift() << "\nPay Rate: $" << other.getSalary()
		<< "\nYearly Bonus: $" << other.getBonus() << std::endl << std::endl;
	return strm;
}