#include<stdio.h>
void main()
{
   int arr[20],*ptr[20],i,size;
   printf("Enter size of array :");
   scanf("%d",&size);
   
   printf("Enter array element :");
   for(i=0;i<size;i++)
   {
     scanf("%d",&arr[i]);
     ptr[i]=&arr[i];
   }
   printf("Array element are :\n");
   for(i=0;i<size;i++)
   {
      printf("%d\t",*ptr[i]);
   }
   printf("\n");
}
