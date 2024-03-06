#include "Patient.h"
#include <iostream>
#include <string>

using namespace std;

void Patient::setPatientDetails(int pID, string pName)
{
	appointmentID = pID;
	patientName = pName;
}
void Patient::setdoctorCharge(float dCharge)
{
	doctorCharge = dCharge;
}
void Patient::sethospitalCharge(float hCharge)
{
	hospitalCharge = hCharge;
}
void Patient::displayPatientDetails()
{
	cout << "Appoinment ID = " << appointmentID << endl
		<< "Patient Name = " << patientName << endl
		<< "Total Payment = " << calculateTotalPayment() << endl;
}
float Patient::calculateTotalPayment()
{
	return doctorCharge + hospitalCharge;
}
