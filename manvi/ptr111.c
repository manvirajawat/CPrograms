#include<stdio.h>
void main()
{
	int i,j,k,a;
	for(i=1;i<=9;i++)
	{ 
	   if(i<=5)
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
	 else
     {
      for(k=1;k<=i-5;k++)
		{
			printf(" ");
		}
       a=10-i;
	  for(j=9;j>=i;j--)
		{
			printf("%c",64+a);
			a--;
		}
		printf("\n");
    }
   }
}
