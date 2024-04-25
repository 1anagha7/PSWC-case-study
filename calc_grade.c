#include <stdio.h>
#include <string.h>
#include "student_info.h"

void displayData(struct Student students[], int numStudents, const char *srn, const char *name) 
{

char subject[6][100]={"PHYSICS","C","MATHEMATICS","ELECTRICAL","MECHANICAL","EVS"};
for (int i=0; i <numStudents; i++) 
{
        for (int j = 0; j < 6; j++)
{
            students[i].total[j] = students[i].isa1[j] + students[i].isa2[j] + students[i].esa[j];
        

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

    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if ((srn != NULL && strcmp(students[i].srn, srn) == 0) ||
            (name != NULL && strstr(students[i].name, name) != NULL)) {
            found = 1;
  
            for (int j = 0; j<6; j++)
            {
                {students[i].total[j] = students[i].isa1[j] + students[i].isa2[j] + students[i].esa[j];}
            }
            printf("Name: %s\nSRN: %s\nSemester: %d\n",students[i].name,students[i].srn,students[i].sem);
            printf("SUBJECT \t ISA1 \t ISA2 \t ESA \t TOTAL\t GRADE\n");
            
    }
    
for (int j = 0; j <6; j++) 
{
if(strcmp(subject[j],"C")==0)
{
printf("%s \t\t %d \t %d \t %d \t %d\t %c\n",subject[j],students[i].isa1[j],students[i].isa2[j],students[i].esa[j],students[i].total[j],students[i].grade[j]);
}

else if(strcmp(subject[j],"EVS")==0)
{
printf("%s \t\t %d \t %d \t %d \t %d\t %c\n",subject[j],students[i].isa1[j],students[i].isa2[j],students[i].esa[j],students[i].total[j],students[i].grade[j]);
}

else 
{
printf("%s \t %d \t %d \t %d \t %d\t %c\n",subject[j],students[i].isa1[j],students[i].isa2[j],students[i].esa[j],students[i].total[j],students[i].grade[j]);

}
}
}
}
