#include <stdio.h>
#include <string.h>
#include "student_info.h"

void calc_grade(char name[][100],char srn[10][100], int sem[], int isa1[10][6],int isa2[10][6], int esa[10][6])

{

char subject[6][100]={"PHYSICS","C","MATHEMATICS","ELECTRICAL","MECHANICAL","EVS"};
int total [10][6];

for (int i=0;i<10;i++)
{
for (int j=0;j<6;j++)
{
	total[i][j]=isa1[i][j]+isa2[i][j]+esa[i][j];
	
}
}

char grade [10][6];
for (int i=0;i<10;i++)
{
for (int j=0;j<6;j++)
{
	if (total[i][j]>=170 && total[i][j]<=180) 	//40(ISA1)+40(ISA2)+100(ESA)=180
		grade[i][j]='S';
	else if (total[i][j]>=160 && total[i][j]<170)
		grade[i][j]='A';
	else if (total[i][j]>=150 && total[i][j]<160)
		grade[i][j]='B';
	else if (total[i][j]>=140 && total[i][j]<150)
		grade[i][j]='C';
	else if (total[i][j]>=130 && total[i][j]<140)
		grade[i][j]='D';
	else if (total[i][j]>=120 && total[i][j]<130)
		grade[i][j]='E';
	else
		grade[i][j]='F';
}
}
	

int credit(char subject[])
{
int c;
if (strcmp(subject,"PHYSICS")==0)
	c=5;
else if (strcmp(subject,"C")==0)
	c=5;
else if (strcmp(subject,"MATHEMATICS")==0)
	c=4;
else if (strcmp(subject,"ELECTRICAL")==0)
	c=4;
else if (strcmp(subject,"MECHANICAL")==0)
	c=3;
else
	c=1;

return c;

}

char n[20];
printf("Enter the SRN of student:");
scanf("%s",&n);
for (int i=0;i<10;i++)
{
if(strcmp(n,srn[i])==0)
{
printf("NAME : %s\nSRN : %s\nSEMESTER : %d\n", name[i],srn[i],sem[i]);
printf("SUBJECT \t ISA1 \t ISA2 \t ESA \t TOTAL\t CREDIT\t GRADE\n");


for (int j=0;j<6;j++)
{

if(strcmp(subject[j],"C")==0)
{
printf("%s \t\t %d \t %d \t %d \t %d\t %d\t %c\n",subject[j],isa1[i][j],isa2[i][j],esa[i][j],total[i][j],credit(subject[j]),grade[i][j]);
}

else if(strcmp(subject[j],"EVS")==0)
{
printf("%s \t\t %d \t %d \t %d \t %d\t %d\t %c\n",subject[j],isa1[i][j],isa2[i][j],esa[i][j],total[i][j],credit(subject[j]),grade[i][j]);
}

else 

printf("%s \t %d \t %d \t %d \t %d\t %d\t %c\n",subject[j],isa1[i][j],isa2[i][j],esa[i][j],total[i][j],credit(subject[j]),grade[i][j]);
}
}
}

}

