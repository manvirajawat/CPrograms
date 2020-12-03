#include<stdio.h>
void main()
{
   	int a[20][20],i,j,r,c;
	   printf("Enter row and column of array :");
  	scanf("%d%d",&r,&c);
	  printf("\nEnter array element :\n");

	  for(i=0;i<r;i++)
	  {
     for(j=0;j<c;j++)
       {
	        scanf("%d",&a[i][j]);
       }
	  }

 printf("Array elements are :\n");
	  for(i=0;i<r;i++)
	  {
     for(j=0;j<c;j++)
       {
	        printf("%d\t",a[i][j]);
       }
      printf("\n");
	  }

printf("Array elements after transposing :\n");
	  for(i=0;i<c;i++)
	  {
     for(j=0;j<r;j++)
       {
	        printf("%d\t",a[j][i]);
       }
      printf("\n");
	  }
 printf("\n");
}
