#include<stdio.h>
void main()
{
	int i,j,row,sum=1;
	printf("Enter row :");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		sum=sum+i;
    printf("%d\t",sum);
		   for(j=1;j<=sum;j++)
		    {
			     printf("*");
		    }
		printf("\n");
	}
}
