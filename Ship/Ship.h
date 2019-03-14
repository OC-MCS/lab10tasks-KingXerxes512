#pragma once
#include <string>
#include <iostream>

using namespace std;

class ship
{
private:
	// Name of ship
	string name;
	// Year ship was built
	string buildYear;
public:
	ship(string, string);
	void setName(string name);
	void setYear(string year);
	string getName();
	string getYear();
	virtual void print();
};