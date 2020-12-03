#include<stdio.h>
void main()
{
	int i,j,row;
	//printf("Enter row :");
	//scanf("%d",&row);
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 && i!=4 || i==1 && j!=2 || i==3 || j==3 || j==5 && i!=2 || i==5 && j!=4 )
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}