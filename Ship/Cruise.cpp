#include "Cruise.h"

Cruise::Cruise(string name, string year, int maxPassengers) : ship(name, year)
{
	setPassengers(maxPassengers);	// sets the max number of passengers
}

void Cruise::setPassengers(int max)
{
	maxPassengers = max;	// sets the max number of passengers
}

int Cruise::getPassengers()	// gets the max passengers
{
	return maxPassengers;
}

void Cruise::print()	// print function
{
	cout << "Name: " << getName() << "\nBuild Year: " << getYear() << "\nMax Passengers: " << getPassengers()
		<< endl << endl;
}