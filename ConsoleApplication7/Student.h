#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int studentID;
	string studentName;
	int marksOOC;
	int marksSPM;
	int marksISDM;

public:
	void setStudentDetais(int sID, string sName);
	void setMarksOOC(int mOOC);
	int getMarksOOC();
	void setMarksSPM(int mSPM);
	int getMarksSPM();
	void setMarksISDM(int mISDM);
	int getMarksISDM();
	int avgMarksOOC();
	int avgMarksSPM();
	int avgMarksISDM();
	void avgMarks();
};

