#include <iostream>
#include "Salesman.h"
#include <string>

using namespace std;

int main()
{
    Salesman* s1 = new Salesman();
    Salesman* s2 = new Salesman();
    Salesman* s3 = new Salesman();

    s1->setSalesmanDetails(1, "John", 30000, 772461836);
    s2->setSalesmanDetails(2, "Ann", 40000, 772461836);
    s3->setSalesmanDetails(3, "Leema", 35000, 772461836);

    s1->setsalesmanContactNo();
    s2->setsalesmanContactNo();
    s3->setsalesmanContactNo();

    cout << endl;

    s1->displaySalesmanDetails();
    s2->displaySalesmanDetails();
    s3->displaySalesmanDetails();


    delete s1, s2, s3;

    return 0;
}

