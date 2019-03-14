#pragma once
#include "Ship.h"

class Cruise : public ship
{
private:
	// Maximum number of passengers the ship can carry
	int maxPassengers;
public:
	Cruise(string, string, int);
	void setPassengers(int);
	int getPassengers();
	void print();
};