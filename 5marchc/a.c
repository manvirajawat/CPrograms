#include<stdio.h>
int i,size,r,c,j;
int* getArrayValue(int arr[20][20])
{
  printf("Enter row and column of array :");
  scanf("%d%d",&r,&c);
  printf("\nEnter array elements :\n");
  for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
        scanf("%d",&arr[i][j]);
      }
      printf("\n");
   }
  return arr;
}
void main()
{
   int arr[20][20],*ptr[20][20];
  
   ptr[20][20]=getArrayValue(arr);
   
   printf("Array elements are :\n");
  for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
        printf("%d\t",*ptr[i][j]);
      }
   }
   printf("\n");
}
