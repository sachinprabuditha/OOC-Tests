#pragma once
#include <string>
#include <iostream>

using namespace std;

class Doctor
{
private:
	int doctorID;
	string doctorName;
	string specialization;
	string hospital;

public:
	void setDoctorDetails(int dID, string dName, string spec, string hos);
	void displayDoctorDetails();
	string getSpecialization();
	void setNewHospital();
};

