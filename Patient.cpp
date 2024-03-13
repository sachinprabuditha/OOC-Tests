#include "Patient.h"
#include <iostream>
#include <string>

using namespace std;

void Patient::setpatientDetaile(int pID, string pName)
{
	appointmentID = pID;
	patientName = pName;
}
void Patient::setDoctorCharge(float dCharge)
{
	doctorCharge = dCharge;
}
void Patient::setHospitalCharge(float hCharge)
{
	hospitalCharge = hCharge;
}
void Patient::displayPatientDetails()
{
	cout << "Appoinment ID = " << appoinmentID << endl
		<< "Patient Name = " << patientName << endl;
}
float Patient::calculateTolatPayment()
{
	return doctorCharge + hospitalCharge;
}
