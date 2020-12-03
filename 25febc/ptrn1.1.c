#include<stdio.h>
void main()
{
	int i,j,row;
	printf("Enter row :");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		    if(i==row || j==i ||j==1)
			printf("%c",64+j);
			else
			printf(" ");
		}
		printf("\n");
	}
}
