#pragma once
#include "FuelGauge.h"
class Odometer
{
private:
	int initialMileage;
	int mileage;

	// Constant for the maximum mileage
	static const int MAXIMUM_MILEAGE = 999999;

	// Constant for the the miles-per-gallon
	static const int MPG = 24;

public:
	Odometer(int mileage);
	void addMile(FuelGauge& other);
	int getMileage();
};

