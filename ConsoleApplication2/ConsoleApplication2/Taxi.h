#include<iostream>
#include <string>
#pragma once

using namespace std;

class Taxi
{
private:
	int taxiID;
	string driver;
	int ratePerKM;
	int distanceTravelled;

public:
	void setTaxiDetails(int tID, string tDriver, int RKM, int dTravelled);
	void displayTaxiDetails();
	int calculateBill();
};

