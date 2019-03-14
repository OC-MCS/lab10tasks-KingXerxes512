#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include <iostream>

int main()
{
	ProductionWorker e1("John Bartee", 15239, "January 29, 2001", 1, 25.34);
	ProductionWorker e2("Joseph Allen", 97234, "October 7, 1999", 2, 32.89);
	Supervisor s1("Mr. Boss Man", 87834, "September 8, 1982", 2, 58.30, 1000.00);

	std::cout << e1 << e2 << s1;

	return 0;
}