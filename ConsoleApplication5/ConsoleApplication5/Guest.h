#pragma once
#include <string>

using namespace std;

class Guest
{
private:
	int guestID;
	string guestName;
	int ratePerDay;
	int numberOfDays;

public:
	void setGuestDetails(int gID, string gName, int rateD, int nDays);
	void displayGuestDetails();
	int calculateGuestBill();
};

