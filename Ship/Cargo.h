#pragma once
#include "Ship.h"

class Cargo : public ship
{
private:
	// Maximum number of tons of cargo can be transported
	int capacity;
public:
	Cargo(string, string, int);
	void setCap(int);
	int getCap();
	void print();
};