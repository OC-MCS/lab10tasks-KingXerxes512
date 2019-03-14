#include "Ship.h"

ship::ship(string name, string year)
{
	setName(name);	// Assigns name
	setYear(year);	// Assigns year
}

void ship::setName(string name)	// sets name
{
	this->name = name;
}

void ship::setYear(string year)	// sets year
{
	buildYear = year;
}

string ship::getName() //gets name
{
	return name;
}

string ship::getYear() // gets year built in
{
	return buildYear;
}

void ship::print()	// prints the name and year built in
{
	cout << "Name: " << name << "\nBuilt: " << buildYear << endl << endl;
}