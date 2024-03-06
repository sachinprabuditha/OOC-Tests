#include "Lab.h"
#include <string>
#include <iostream>

using namespace std;

void Lab::setLabDetails(int lId, int Cap)
{
	labID = lId;
	capacity = Cap;
}

void Lab::getCapacity()
{
	cout << "labID = " << labID << endl;
	cout << "capasity = " << capacity << endl;
}

void Lab::insertNewCapacity()
{
	cout << "Insert Capacity: ";
	cin >> capacity;
}
