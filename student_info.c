#include <stdio.h>

void student_info(char name[2][100],char srn[2][100],int sem[])

{
	int w;
	printf("Enter number of students for marks entry");
	scanf("%d",&w);
	
	if(w>10)
	{
		printf("Maximum limit of 10 students exceeded.Try again.\n");
	}

    else
	{
    printf("Enter Student Names:\n");
    for(int i=0;i<w;i++)
    {
        scanf("%s",&name[i]);
    }

    printf("Enter SRN (example format:PES01)\n");
    for (int i=0;i<w;i++)
    {
        scanf("%s",&srn[i]);
    }

    printf("Enter semester:\n");
    for (int i=0;i<w;i++)
    {
        scanf("%d",&sem[i]);
    }
	}
}
