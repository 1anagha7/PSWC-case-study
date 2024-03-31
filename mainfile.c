#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "student_info.h"


int main()
{
    char name [10][100];         //=["A","B"]
    int srn[10][100];            //=[PES01,PES02]
    int sem[10];            	//=[1,2]


    int isa1[10][6];
    int isa2[10][6];
    int esa[10][6];

	int options;
	
    do 
{   printf("WELCOME TO MENU\n");
    printf("1. Student information entry \n");
    printf("2. Marks entry \n");
    printf("3. Grade Card Display\n");
    printf("4. Exit\n");
    printf("Enter suitable number:");
    scanf("%d",&options);

    switch(options)
    {
        case 1: student_info(name,srn,sem);
        break;

        case 2: exam_info(isa1,isa2,esa,srn);
        break;

        case 3: calc_grade(name,srn,sem,isa1,isa2,esa);
        break;
	
	case 4: break;

        default: printf("PLEASE ENTER VALID INPUT\n\n");
        break;
    }
}
while (options!=4);


}