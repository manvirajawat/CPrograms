#include<stdio.h>
int i,size;
int* getArrayValue(int arr[])
{
  printf("Enter size of array :");
  scanf("%d",&size);
  printf("\nEnter array elements :\n");
  for(i=0;i<size;i++)
   {
        scanf("%d",&arr[i]);
   }
  return arr;
}
void main()
{
   int arr[20],*ptr;
  
   ptr=getArrayValue(arr);
   
   printf("Array elements are :\n");
   for(i=0;i<size;i++)
   {
        printf("%d\t",*(ptr+i));
   }
   printf("\n");
}
