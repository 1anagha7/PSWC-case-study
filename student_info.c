#include <stdio.h>
#include "student_info.h"

void inputStudents(struct Student *students, int numStudents)
{
 for (int i = 0; i < numStudents; i++) 
{
        printf("Enter student details:\n");
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter SRN: ");
        scanf("%s", &students[i].srn);
	printf("Enter Semester: ");
	scanf("%d", &students[i].sem);

       printf("Enter marks for ISA1 in the order of: Physics C Math  Electrical  Mechanical  EVS (ALL OUT OF 40)\n");
       for (int j = 0; j < 6; j++) 
	{scanf("%d", &students[i].isa1[j]);}

	printf("Enter marks for ISA2 in the order of: Physics C Math  Electrical  Mechanical  EVS (ALL OUT OF 40)\n");
       for (int j = 0; j < 6; j++) 
	{scanf("%d", &students[i].isa2[j]);}

	printf("Enter marks for ESA in the order of: Physics C Math  Electrical  Mechanical  EVS (ALL OUT OF 100) \n");
       for (int j = 0; j < 6; j++) 
	{scanf("%d", &students[i].esa[j]);}

}

}
