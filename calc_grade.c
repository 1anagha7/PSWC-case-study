#include <stdio.h>
#include <string.h>
#include "student_info.h"

void calc_grade(struct Student *students, int numStudents) 
{

for (int i=0; i <numStudents; i++) 
    {
        for (int j = 0; j < 6; j++)
        {
            students[i].total[j] = students[i].isa1[j] + students[i].isa2[j] + students[i].esa[j];
        }
    }

for(int i=0;i<numStudents;i++)
{
    for(int j=0;j<6;j++)
    {
        if (students[i].total[j]>=170 && students[i].total[j] <= 180)
            students[i].grade[j] = 'S';
        else if (students[i].total[j]>=160 && students[i].total[j]<= 170)
            students[i].grade[j] = 'A';
	else if (students[i].total[j]>=150 && students[i].total[j]<= 160)
            students[i].grade[j] = 'B';
        else if (students[i].total[j]>=140 && students[i].total[j]<= 150)
            students[i].grade[j] = 'C';
	else if (students[i].total[j]>=130 && students[i].total[j]<= 140)
            students[i].grade[j] = 'D';
	else if (students[i].total[j]>=120 && students[i].total[j]<= 130)
            students[i].grade[j] = 'E';
	else
            students[i].grade[j] = 'F';
    }
}

}
