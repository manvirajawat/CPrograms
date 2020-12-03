#include<stdio.h>
void main()
{
	int i,j,k,row;
	printf("Enter row :");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(j=1;j<=row;j++)
		{
			if(j>=i)
			printf("*");
		    else
			printf(" ");
		}
		printf("\n");
	}
}