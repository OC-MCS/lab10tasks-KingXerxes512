#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(std::string name, int num, std::string date, int shift, double pay) : Employee(name, num, date)
{
	setShift(shift);
	setPayRate(pay);
}

void ProductionWorker::setShift(int shift)
{
	this->shift = shift;
}

void ProductionWorker::setPayRate(double pay)
{
	payRate = pay;
}

int ProductionWorker::getShift()
{
	return shift;
}

double ProductionWorker::getPay()
{
	return payRate;
}

std::ostream& operator<<(std::ostream& strm, ProductionWorker& other)
{
	strm << "Employee Name: " << other.getName() << "\nEmployee Number: " << other.getNum() << "\nHire Date: "
		<< other.getDate() << "\nShift: " << other.getShift() << "\nPay Rate: $" << other.getPay() << std::endl << std::endl;
	return strm;
}