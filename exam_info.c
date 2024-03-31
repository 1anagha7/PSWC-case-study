#include <stdio.h>
#include<string.h>

void exam_info(int isa1[10][6],int isa2[10][6], int esa[10][6], char srn[10][100])
{	

char m[20];
printf("Enter suitable SRN for marks entry\n");
scanf("%s",&m);

for(int i=0;i<10;i++)
{
if(strcmp(m,srn[i])==0)
{
	printf("Enter ISA1 marks:\n");
	printf("In the order of: Physics C Math  Electrical  Mechanical  EVS (ALL OUT OF 40)\n");
	{
		printf("Marks obtained by SRN number %s in ISA1 is:",srn[i]);
		
			for (int j=0;j<6;j++)
			{scanf("%d",&isa1[i][j]);}
			
	}

	printf("Enter ISA2 marks:\n");
	printf("In the order of: Physics C Math  Electrical  Mechanical  EVS (ALL OUT OF 40)\n");
	{
		printf("Marks obtained by SRN number %s in ISA2 is:",srn[i]);
		
			for (int j=0;j<6;j++)
			{ scanf("%d",&isa2[i][j]);}
	}


	printf("Enter ESA marks:\n");
	printf("In the order of: Physics C Math  Electrical  Mechanical  EVS (ALL OUT OF 100)\n");
	{
		printf("Marks obtained by SRN number %s in ESA is:",srn[i]);
		
			for (int j=0;j<6;j++)
			{ scanf("%d",&esa[i][j]);}
	}
}
}
}