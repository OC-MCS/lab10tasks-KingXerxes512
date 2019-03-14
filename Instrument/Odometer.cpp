#include "Odometer.h" 

Odometer::Odometer(int mileage)
{
	this->initialMileage = mileage;
	this->mileage = mileage;
}

int Odometer::getMileage()
{
	return mileage;
}

void Odometer::addMile(FuelGauge& other)
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
		other.burnFuel();
	}
}