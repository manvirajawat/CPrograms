#include<stdio.h>
void main()
{
	int i,j,k,row,a=0;
	printf("Enter row :");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row-i;j++)
		{
		   printf(" ");
		}
		for(k=1;k<=i;k++)
		{
                  a=a+1;
	          printf("%d",a);
	          printf(" ");	
		}
		printf("\n");
	}
}
