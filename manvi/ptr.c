#include<stdio.h>
void main()
{
	int i,j,a;
	for(i=1;i<=5;i++)
	{
    	for(j=1;j<=i;j++)
		{
			printf("%c",64+j);
		}
		printf("\n");
	}
	for(i=1;i<=4;i++)
    {
      a=1;
	  for(j=4;j>=i;j--)
		{
			printf("%c",64+a);
			a++;
		}
		printf("\n");
    }
}
