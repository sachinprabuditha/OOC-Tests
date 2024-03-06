#include <iostream>
#include "Patient.h"
#include <string>

using namespace std;

int main()
{
    Patient p1, p2;
    p1.setPatientDetails(1001, "Nimal");
    p1.setdoctorCharge(1500);
    p1.sethospitalCharge(500);
    p2.setPatientDetails(1002, "Sunil");
    p2.setdoctorCharge(1700);
    p2.sethospitalCharge(500);

    p1.displayPatientDetails();
    p1.calculateTotalPayment();

    p2.displayPatientDetails();
    p2.calculateTotalPayment();

    return 0;
}

