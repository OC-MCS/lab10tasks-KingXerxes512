#include "Ship.h"
#include "Cruise.h"
#include "Cargo.h"

int main()
{
	// Initializes instances
	Cruise s1("USS Something", "1995", 500);
	Cargo c1("USS IDon'tKnow", "1996", 2000);

	// Create the pointers
	ship* ptr = &s1;
	ship* ptr2 = &c1;

	// Put pointers into an array
	ship* arr[] = { ptr, ptr2 };

	// Runs loop that calls the print function for the elements within the array for their respective classes
	for (int ndx = 0; ndx < sizeof(arr) / sizeof(ship*); ndx++)
	{
		arr[ndx]->print();
	}

	return 0;
}