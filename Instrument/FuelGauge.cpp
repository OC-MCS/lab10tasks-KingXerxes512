#include "FuelGauge.h"
#include <iostream>

FuelGauge::FuelGauge()
{
	gallons = 0;
}

FuelGauge::FuelGauge(int gallons)
{
	if (gallons <= MAXIMUM_GALLONS)
	{
		this->gallons = gallons;
	}
	else
	{
		this->gallons = MAXIMUM_GALLONS;
		std::cout << "Tank set to 15 gallon max.\n";
	}
}

int FuelGauge::getGallons()
{
	return gallons;
}

void FuelGauge::addGallons()
{
	if (gallons < MAXIMUM_GALLONS)
	{
		gallons++;
	}
	else
		std::cout << "FUEL OVERFLOWING!!!\n";
}

void FuelGauge::burnFuel()
{
	if (gallons > 0)
	{
		gallons--;
	}
	else
	{
		std::cout << "OUT OF FULL!!!\n";
	}
}