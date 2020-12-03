#include<stdio.h>
void main()
{
   int a[5][20][20],i,j,k,m,r,c;
   printf("Enter no. of matrix, rows and columns :");
   scanf("%d%d%d",&m,&r,&c);
 
 printf("Enter elements :\n");
 for(i=0;i<m;i++)
   {
        printf("%d Matrix\n",i+1);
         for(j=0;j<r;j++)
          {
             for(k=0;k<c;k++)
              {
                scanf("%d\t",&a[i][j][k]);
              }
         printf("\n");
          }
   }

  printf("Elements in matrix :\n");  
   for(i=0;i<m;i++)
   {
        printf("%d Matrix\n",i+1);
         for(j=0;j<r;j++)
          {
             for(k=0;k<c;k++)
              {
                 printf("%d\t",a[i][j][k]);
              }
         printf("\n");
          }
   }
 printf("\n");
}
