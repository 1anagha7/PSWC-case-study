#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student_info.h"

void displaystudentdata(struct Student *students,int numStudents,const char search[]);

void printall()
{
    FILE *file = fopen("StudentData.txt","r");
    if(file == NULL)
    {
        printf("Unable to open file for reading\n");
    }

    int numStudents;
    fscanf(file, "%d" ,&numStudents);

    struct Student *students = malloc(numStudents * sizeof(struct Student));
    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        fclose(file);
    }

    for(int i=0; i<numStudents ;i++)
    {
        {
                    fscanf(file, "%s", students[i].name);
                    fprintf(file,"\n");
                    fscanf(file, "%s", students[i].srn);
                    fprintf(file,"\n");
                    fscanf(file, "%d", &students[i].sem);
                    fprintf(file,"\n");

                for (int j=0; j<6; j++)
                {
                    fscanf(file,"%d",&students[i].isa1[j]);
                }

                for (int j=0; j<6 ;j++)
                {
                    fscanf(file,"%d",&students[i].isa2[j]);
                }

                for (int j=0; j<6 ;j++)
                {
                    fscanf(file,"%d",&students[i].esa[j]);
                }

                for (int j=0; j<6 ;j++)
                {
                    fscanf(file,"%d",&students[i].total[j]);
                }

                for (int j=0; j<6 ;j++)
                {
                    fscanf(file," %c",&students[i].grade[j]);
                }

        }
    }

fclose(file);

char search[100];
    printf("Enter name or SRN to search for a student: ");
    scanf("%s", search);

    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, search) == 0 || strcmp(students[i].srn, search) == 0) {
            displaystudentdata(&students[i], numStudents,search);
            found = 1;
            break; 
        }
    }

    if (found == 0) {
        printf("Student not found.\n");
    }

    free(students);
}

void displaystudentdata(struct Student *students,int numStudents,const char search[])
{

char subject[6][100]={"PHYSICS","C       ","MATHEMATICS ","ELECTRICAL","MECHANICAL  ","EVS     "};
printf("\t\t\n********** GRADE CARD **********\t\t\n\n");
int found =0;
for(int i=0; i<numStudents;i++)
    {
    if (strcmp(students[i].name, search) == 0 || strcmp(students[i].srn, search) == 0) 
    {
    printf("NAME : %s\nSRN  : %s\nSEMESTER : %d\n\n",students[i].name,students[i].srn,students[i].sem);
    printf("SUBJECT \t ISA1 \t ISA2 \t ESA \t TOTAL \t GRADE\n\n");

    for(int j=0;j<6;j++)
    {
        printf("%s \t %d \t %d \t %d \t %d \t %c\n",subject[j],students[i].isa1[j],students[i].isa2[j],students[i].esa[j],students[i].total[j],students[i].grade[j]);
    }
    printf("\n\n");
    found=1;
    break;
    }
}
if(!found){printf("studnet not found.\n");}
}
