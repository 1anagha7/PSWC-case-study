#include <stdio.h>
#include <stdlib.h>
#include "student_info.h"

void student_info(struct Student *students, int numStudents)
{
 for (int i = 0; i < numStudents; i++) 
       {
        printf("Enter details for student %d:\n",i+1);

        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter SRN: ");
        scanf("%s", students[i].srn);
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



void savestudentdata(struct Student *students, int numStudents)
{
    
       FILE *file = fopen("StudentData.txt", "w");
       if (file == NULL) 
                {
                    printf("Error while opening the file for writing.\n");
                     return;
                }

                fprintf(file,"%d\n",numStudents);

                for (int i = 0; i < numStudents; i++) 
                {
                    fprintf(file, "%s", students[i].name);
                    fprintf(file,"\n");
                    fprintf(file, "%s", students[i].srn);
                    fprintf(file,"\n");
                    fprintf(file, "%d", students[i].sem);
                    fprintf(file,"\n");

                for (int j=0; j<6;j++)
                {
                    fprintf(file,"%d ",students[i].isa1[j]);
                }
fprintf(file,"\n");
                for (int j=0; j<6;j++)
                {
                    fprintf(file,"%d ",students[i].isa2[j]);
                }
fprintf(file,"\n");
                for (int j=0; j<6;j++)
                {
                    fprintf(file,"%d ",students[i].esa[j]);
                }
fprintf(file,"\n");
                for (int j=0; j<6;j++)
                {
                    fprintf(file,"%d ",students[i].total[j]);
                }
fprintf(file,"\n");
                for (int j=0; j<6;j++)
                {
                    fprintf(file,"%c ",students[i].grade[j]);
                }
fprintf(file,"\n");

                }
              fclose(file);
              printf("successfully written to the file.\n");

}

