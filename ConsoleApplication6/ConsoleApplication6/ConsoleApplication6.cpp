#include <iostream>
#include "Lab.h"
#include <string>

using namespace std;

int main()
{
    Lab l1, l2, l3;

    l1.setLabDetails(401, 60);
    l2.setLabDetails(402, 40);
    l3.setLabDetails(403, 30);
    
    l1.insertNewCapacity();

    cout << endl;

    l1.getCapacity();
    l2.getCapacity();
    l3.getCapacity();

    return 0;

}
