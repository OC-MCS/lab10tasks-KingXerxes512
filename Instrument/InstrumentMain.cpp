#include "Odometer.h"
#include "FuelGauge.h"
#include <iostream>
#include <chrono>

int main()
{
	FuelGauge fuel;
	Odometer odometer(0);

	// Simulates filling the tank up to full from 0
	for (int x = 0; x < 15; x++)
	{
		fuel.addGallons();
	}

	while (fuel.getGallons() > 0)
	{

		// add mile driven
		odometer.addMile(fuel);

		// display the mileage
		std::cout << "Miles: " << odometer.getMileage() << std::endl;

		// display the amount of fuel
		std::cout << "Fuel level: " << fuel.getGallons() << " gallons" << std::endl;
		std::cout << "------------------------------------\n";
		_sleep(500);
	}
	
	return 0;
}