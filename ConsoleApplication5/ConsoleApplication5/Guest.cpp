#include "Guest.h"
#include <string>
#include <iostream>

using namespace std;

void Guest::setGuestDetails(int gID, string gName, int rateD, int nDays)
{
	guestID = gID;
	guestName = gName;
    ratePerDay = rateD;
	numberOfDays = nDays;
}

void Guest::displayGuestDetails()
{
	cout << "GuestID = " << guestID << endl;
	cout << "Guest Name = " << guestName << endl;
	cout << "Bill Amount = " << calculateGuestBill() << endl;
}

int Guest::calculateGuestBill()
{
	return ratePerDay * numberOfDays;
}
