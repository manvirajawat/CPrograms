#include<stdio.h>
void main()
{
   	int a[20][20],i,j,r,c;
	printf("Enter row and column of matrix :");
  	scanf("%d%d",&r,&c);

	 printf("\nEnter  element for matrix :\n");
     for(i=0;i<r;i++)
	  {
        for(j=0;j<c;j++)
         {
	        scanf("%d",&a[i][j]);
        }
	  }

     printf("Matrix  elements are :\n");
	 for(i=0;i<r;i++)
	  {
        for(j=0;j<c;j++)
         {
	        printf("%d\t",a[i][j]);
         }
       printf("\n");
	  }
   printf("Resultant after addition of matrix :\n");
	 for(i=0;i<r;i++)
	  {
         for(j=0;j<c;j++)
          {
	        printf("%d\t",a1[i][j]+a2[i][j]);
         }
      printf("\n");
	  }
 printf("\n");
}
