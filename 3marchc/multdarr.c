#include<stdio.h>
void main()
{
   int a[2][3][3]={
                              {
                                  {1,2,3},
                                  {4,5,6},
                                  {7,8,9}
                              },
                              {
                                  {3,2,1},
                                  {6,5,4},
                                  {9,8,7}
                              }
                           },i,j,k;
   for(i=0;i<2;i++)
   {
        printf("%d Matrix\n",i+1);
         for(j=0;j<3;j++)
          {
             for(k=0;k<3;k++)
              {
                 printf("%d\t",a[i][j][k]);
              }
         printf("\n");
          }
   }
 printf("\n");
}
