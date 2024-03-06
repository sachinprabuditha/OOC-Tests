#include <iostream>
#include <string>
#include "Doctor.h"

using namespace std;

int main()
{
    Doctor d1, d2, d3;

    d1.setDoctorDetails(1, "Dr.Sunil", "Neurologist", "Asiri");
    d2.setDoctorDetails(2, "Dr.Yasantha", "Oncologist", "Lanka");
    d3.setDoctorDetails(3, "Dr.Godvin", "Neurologist", "ooc");

    d1.setNewHospital();
    d2.setNewHospital();
    d3.setNewHospital();

    cout << endl;

    d1.displayDoctorDetails();
    d2.displayDoctorDetails();
    d3.displayDoctorDetails();

    return 0;

}

