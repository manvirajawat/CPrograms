#include<stdio.h>
void main()
{
	int i,j,k,row;
	printf("Enter row :");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row-i;j++)
		{
		   printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
		   if(k==1 || k==2*i-1)
	           printf("1");
	           else
	           printf("*");	
		}
		printf("\n");
	}
}
