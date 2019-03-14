#pragma once
#include "Employee.h"

class ProductionWorker : public Employee
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker(std::string, int num, std::string date, int shift, double pay);
	void setShift(int shift);
	void setPayRate(double pay);
	int getShift();
	double getPay();
};

std::ostream& operator<<(std::ostream& strm, ProductionWorker& other);