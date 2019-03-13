#pragma once
class FuelGauge
{	
private:
	int gallons;

	// Constant for the max capacity of a gas tank 
	static const int MAXIMUM_GALLONS = 15;
public:
	FuelGauge();
	FuelGauge(int gallons);
	int getGallons();
	void addGallons();
	void burnFuel();
};