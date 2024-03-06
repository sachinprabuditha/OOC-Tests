#include "Taxi.h"
#include <string>

using namespace std;

void Taxi::setTaxiDetails(int tID, string tDriver, int RKM, int dTravelled)
{
	taxiID = tID;
	driver = tDriver;
	ratePerKM = RKM;
	distanceTravelled = dTravelled;
}

void Taxi::displayTaxiDetails()
{
	cout << "Taxi ID = " << taxiID << endl;
	cout << "Driver Name = " << driver << endl;
	cout << "Bill Ammount = " << calculateBill() << endl << endl;
}

int Taxi::calculateBill()
{
	return ratePerKM*distanceTravelled;
}
