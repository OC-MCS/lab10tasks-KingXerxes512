#include "Odometer.h" 

Odometer::Odometer(int mileage, FuelGauge fuelGauge)
{
	this->initialMileage = mileage;
	this->mileage = mileage;
	this->fuelGauge = fuelGauge;
}

int Odometer::getMileage()
{
	return mileage;
}

void Odometer::addMile()
{
	if (mileage < MAXIMUM_MILEAGE)
	{
		mileage++;
	}
	else
	{
		mileage = 0;
	}

	int driven = initialMileage - mileage;
	if (driven % MPG == 0)
	{
		fuelGauge.burnFuel();
	}
}