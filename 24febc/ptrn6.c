#include<stdio.h>
void main()
{
	int i,j,k,row;
	printf("Enter row :");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(k=1;k<=row-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}