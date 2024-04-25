#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "student_info.h"


int main()

{
	int options1;
	int options2;
	int total;
	int numStudents;
	printf("****WELCOME TO MENU!****\n");
	printf("Enter number of students for marks entry");
	scanf("%d",&numStudents);
	

	struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));

    do 

{   
    printf("1. Student information entry \n");
    printf("2. Grade Card Display \n");
    printf("3. Exit\n");
    printf("Enter suitable number:");
    scanf("%d",&options1);

    switch(options1)
    {
        case 1: inputStudents(students,numStudents);
        break;

        case 2:
{
		printf("1. Search by SRN \n");
		printf("2. Search by Name \n");
		printf("Enter suitable number:");
		scanf("%d",&options2);
if (options2 == 1) 
{
        char srn[50];
        printf("Enter SRN to search: ");
        scanf("%s", srn);
        displayData(students, numStudents, srn, NULL);
    } 
else if (options2 == 2) 
    {
        char name[50];
        printf("Enter partial Name to search: ");
        scanf("%s", name);
	displayData(students, numStudents, NULL, name);
    } 
else 
    {
        printf("PLEASE ENTER VALID INPUT\n");
    }
break;
}
	case 3: break;

        default: printf("PLEASE ENTER VALID INPUT\n\n");
        break;
    }
}
while (options1!=3);


}