#include "Salesman.h"
#include <iostream>

void Salesman::setSalesmanDetails(int sID, string sName, int sal, int CNo)
{
	salesmanid = sID;
	salesmanName = sName;
	salary = sal;
	contactNo = CNo;
}

void Salesman::displaySalesmanDetails()
{
	cout << "SalesmanId = " << salesmanid << endl;
	cout << "SalesmanName = " << salesmanName << endl;
	cout << "Salary = " << salary << endl;
	cout << "ContactNo = " << contactNo << endl;
}

void Salesman::setsalesmanContactNo()
{
	cout << "Input new contact nuber of salesman" << salesmanid << ":";
	cin >> contactNo;
}
