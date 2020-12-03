#include<stdio.h>
void main()
{
   int arr[20],*ptr,i,size;
   printf("Enter size of array :");
   scanf("%d",&size);
   
   printf("Enter array elements :");
   for(i=0;i<size;i++)
   {
     scanf("%d",&arr[i]);
   }
   
   ptr=arr;
   
   printf("Array elements are :\n");
   for(i=0;i<size;i++)
   {
      /*printf("%d\t",*ptr);
      ptr++;*/
      
     printf("%d\t",*(ptr+i));
   }
   printf("\n");
}
