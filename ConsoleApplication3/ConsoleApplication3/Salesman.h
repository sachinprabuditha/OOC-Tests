#pragma once
#include <string>
#include <iostream>

using namespace std;

class Salesman
{
private:
	int salesmanid;
	string salesmanName;
	int salary;
	int contactNo;

public:
	void setSalesmanDetails(int sID, string sName, int sal, int CNo);
	void displaySalesmanDetails();
	void setsalesmanContactNo();
};

