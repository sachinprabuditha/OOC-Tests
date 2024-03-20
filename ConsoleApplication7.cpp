#include <iostream>
#include "Patient.h"

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

    cout << "Total Payment = " << p1.calculateTotalPayment() << endl << endl;

    p2.displayPatientDetails();
    cout << "Total Payment = " << p2.calculateTotalPayment() << endl;

    return 0;
}
