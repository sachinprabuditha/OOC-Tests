#include "Doctor.h"
#include <iostream>

void Doctor::setDoctorDetails(int dID, string dName, string spec, string hos)
{
	doctorID = dID;
	doctorName = dName;
	specialization = spec;
	hospital = hos;
}

void Doctor::displayDoctorDetails()
{
	cout << "DoctorID =" << doctorID << endl;
	cout << "DoctorName = " << doctorName << endl;
	cout << "Specialization = " << specialization << endl;
	cout << "Hospital = " << hospital << endl;
}

string Doctor::getSpecialization()
{
	return specialization;
}

void Doctor::setNewHospital()
{
	cout << "Input new hospital of doctor " << doctorID << ":";
	cin >> hospital;
}

