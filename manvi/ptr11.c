#include<stdio.h>
void main()
{
	int i,j,k,a;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		a=i;
    	for(j=1;j<=i;j++)
		{
			printf("%c",64+a);
			a--;
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
    {
      for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
       a=i;
	  for(j=1;j<=i;j++)
		{
			printf("%c",64+a);
			a--;
		}
		printf("\n");
    }
}
