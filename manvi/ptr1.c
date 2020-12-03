#include<stdio.h>
void main()
{
	int i,j,a;
	for(i=1;i<=9;i++)
	{
	  if(i<=5)
	  {
    	for(j=1;j<=i;j++)
		{
			printf("%c",64+j);
		}
		printf("\n");
      }
	
	else
     {
      a=1;
	  for(j=9;j>=i;j--)
		{
			printf("%c",64+a);
			a++;
		}
		printf("\n");
     }
   }
}
