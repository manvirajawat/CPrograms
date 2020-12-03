#include<stdio.h>
void main()
{
   	int a1[20][20],a2[20][20],a3[20][20],i,j,r1,r2,c1,c2,k;

	printf("Enter row and column of matrix I :");
  	scanf("%d%d",&r1,&c1);

   printf("Enter row and column of matrix II :");
  	scanf("%d%d",&r2,&c2);

if(c1==r2)
{
	 printf("\nEnter  element for matrix I:\n");
     for(i=0;i<r1;i++)
	  {
        for(j=0;j<c1;j++)
         {
	        scanf("%d",&a1[i][j]);
        }
	  }

   printf("\nEnter  element for matrix II:\n");
   for(i=0;i<r2;i++)
	  {
        for(j=0;j<c2;j++)
        {
	        scanf("%d",&a2[i][j]);
        }
	  }

     printf("Matrix I elements are :\n");
	 for(i=0;i<r1;i++)
	  {
        for(j=0;j<c1;j++)
         {
	        printf("%d\t",a1[i][j]);
         }
       printf("\n");
	  }

   printf("Matrix I elements are :\n");
	 for(i=0;i<r2;i++)
	  {
        for(j=0;j<c2;j++)
         {
	        printf("%d\t",a2[i][j]);
         }
       printf("\n");
	  }

   for(i=0;i<r1;i++)
   {
     for(j=0;j<c2;j++)
      {
         a3[i][j]=0;
         for(k=0;k<c1;k++)
         {
            a3[i][j]=a3[i][j]+a1[i][k]*a2[k][j];
         }
       }
     }
         
   printf("Resultant array after  multiplication :\n");
	 for(i=0;i<r1;i++)
	  {
         for(j=0;j<c2;j++)
          {
	        printf("%d\t",a3[i][j]);
         }
      printf("\n");
	  }
}

else
   printf("Multiplication not possible :");
 printf("\n");
}
