#include <iostream>
#include <string>
#include "Guest.h"

int main()
{
    Guest g1, g2, g3;

    g1.setGuestDetails(1212, "Jared", 4500, 4);
    g2.setGuestDetails(1122, "Ben", 3000, 3);
    g3.setGuestDetails(1212, "Jared", 5750, 2);

    g1.calculateGuestBill();
    g2.calculateGuestBill();
    g3.calculateGuestBill();

    cout << endl;

    g1.displayGuestDetails();
    g2.displayGuestDetails();
    g3.displayGuestDetails();

    return 0;
}

