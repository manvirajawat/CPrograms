#include<stdio.h>
void main()
{
	int i,j,k,l,m,a;
	for(i=1;i<=9 ;i++)
	{
       if(i<=5)
       {
         for(k=1;k<=i;k++)
	     {
	   	   printf("%c",64+k);
	     }    	
	     for(l=1;l<=9-i*2;l++)
		 {
		    printf(" ");
		 }
		 if(i!=5)
		 {
		   a=i;
		   for(m=1;m<=i;m++)
		   {
		    	printf("%c",64+a);
		    	a--;
		   }
	     }
	     else
	     {
	     	a=i-1;
	     	for(m=1;m<=i-1;m++)
		   {
		    	printf("%c",64+a);
		    	a--;
		   }
		 }
		 printf("\n");
       }
       else
       {
       	  for(k=1;k<=10-i;k++)
	     {
	   	   printf("%c",64+k);
	     }    	
	     for(l=1;l<=i*2-11;l++)
		 {
		    printf(" ");
		 }
		 a=10-i;
		 for(m=1;m<=10-i;m++)
		 {
		 	printf("%c",64+a);
		 	a--;
		 }
		 printf("\n");
	   }
    }
}
	
