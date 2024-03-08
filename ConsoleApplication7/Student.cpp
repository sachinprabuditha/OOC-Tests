#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

void Student::setStudentDetais(int sID, string sName)
{
	studentID = sID;
	studentName = sName;
}

void Student::setMarksOOC(int mOOC)
{
	marksOOC = mOOC;
}

int Student::getMarksOOC()
{
	return marksOOC;
}

void Student::setMarksSPM(int mSPM)
{
	marksSPM = mSPM;
}

int Student::getMarksSPM()
{
	return marksSPM;
}

void Student::setMarksISDM(int mISDM)
{
	marksISDM = mISDM;
}

int Student::getMarksISDM()
{
	return marksISDM;
}

int Student::avgMarksOOC()
{
	return getMarksOOC()/4.0;
}

int Student::avgMarksSPM()
{
	return getMarksSPM()/4.0;
}

int Student::avgMarksISDM()
{
	return getMarksISDM()/4.0;
}

void Student::avgMarks()
{
	cout << "Average OOC mark : " << avgMarksOOC() << endl;
	cout << "Average SPM mark : " << avgMarksSPM() << endl;
	cout << "Average ISDM mark : " << avgMarksISDM() << endl;
}


