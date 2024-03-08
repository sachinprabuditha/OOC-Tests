#include <iostream>
#include <string>
#include "Student.h"

int main()
{
    Student s1, s2, s3, s4;

    s1.setStudentDetais(1234, "Kamal");
    s1.setMarksOOC(85);
    s1.setMarksSPM(80);
    s1.setMarksISDM(75);

    s2.setStudentDetais(4567, "Saman");
    s1.setMarksOOC(65);
    s1.setMarksSPM(50);
    s1.setMarksISDM(45);

    s3.setStudentDetais(7891, "Nimal");
    s1.setMarksOOC(98);
    s1.setMarksSPM(75);
    s1.setMarksISDM(80);

    s4.setStudentDetais(1212, "Sunil");
    s1.setMarksOOC(35);
    s1.setMarksSPM(60);
    s1.setMarksISDM(40);

    return 0;

    


}
