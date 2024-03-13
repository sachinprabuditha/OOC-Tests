#pragma once
#include <string>

using namespace std;

class Patient
{
private:
	int appointmentID;
	string patientName;
	float doctorCharge;
	float hospitalCharge;

public:
	void setPatientDetails(int aID, string pName);
	void displayPatientDetails();
	void setdoctorCharge(float dCharge);
	void sethospitalCharge(float hCharge);
	void calculateTotalPayment();
};

