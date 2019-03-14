#include "Cargo.h"

Cargo::Cargo(string name, string year, int cap) : ship(name, year)
{
	setCap(cap);	// sets the capacity of the cargo ship
}

void Cargo::setCap(int cap)
{
	capacity = cap; // sets the capacity of the cargo ship
}

int Cargo::getCap()	// gets the capacity of the cargo ship
{
	return capacity;	
}

void Cargo::print()	// print function
{
	cout << "Name: " << getName() << "\nBuild Year: " << getYear() << "\nCapacity: " << getCap() << " tons" << endl;
}