#include<stdio.h>
void main()
{
	int i,j,row;
	printf("Enter row :");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || i==row || i==j)
				printf("%c",64+j);
			else
				printf(" ");
		}
		printf("\n");
	}
}
