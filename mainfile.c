#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "student_info.h"


int main()

{
	int numStudents;
    int option1;
	printf("****WELCOME TO MENU!****\n");
	printf("Enter number of students for marks entry");
	scanf("%d",&numStudents);
	
    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));

    char option2='y';
    char srn;
    char name[50];
    
    while(option2=='y')
{   
    printf("1. Student Information Entry \n");
    printf("2. Calculation of marks and grade \n");
    printf("3. Grade card display\n");
    printf("4. Edit existing student data\n");
    printf("Enter suitable number:");
    scanf("%d",&option1);

    switch(option1)
    {
        case 1: 
                {student_info(students,numStudents);
                savestudentdata(students,numStudents);
                break;}
                
        case 2:
                {calc_grade(students,numStudents);
                savestudentdata(students,numStudents);
                break;}
        
        case 3: {printall();
                break;}

        case 4: 
                {
                editdata(students,numStudents);
                break;
                }
    
        default: printf("PLEASE ENTER VALID INPUT\n\n");
        break;
    }

    printf("Do you want to continue?(y/n):  ");
    option2=getch();
}
return 0;
}

//1 gcc -c student_info.c -o student_info.o
//2 gcc -c calc_grade.c -o calc_grade.o
//3 gcc -c search.c -o search.o
// gcc -c edit_data.c -o edit_data.o
//4 gcc mainfile.c edit_data.o search.o calc_grade.o student_info.o -o mainfile
//mingw32-make -f phase_3.mk
//a.exe