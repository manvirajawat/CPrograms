#include<stdio.h>
void main()
{
   int arr[20],*ptr,i,size,temp;
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
      printf("%d\t",*(ptr+i));
   }
   
   for(i=0;i<size/2;i++)
   {
      temp=*(ptr+i);
      *(ptr+i)=*(ptr+(size-1-i));
      *(ptr+(size-1-i))=temp;
   }
   
   printf("\nArray elements after reversing using pointer :\n");
   for(i=0;i<size;i++)
   {
      printf("%d\t",*(ptr+i));
   }
   printf("\n");
}















