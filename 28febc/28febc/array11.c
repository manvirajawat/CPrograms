#include<stdio.h>
void main()
{
	int a[20],i,size,rem,rev=0;
	printf("Enter size of array :");
	scanf("%d",&size);
	printf("\nEnter array element :\n");
	for(i=0;i<size;i++)
	  {
	      scanf("%d",&a[i]);
	 }
	printf("\nArray elements are :\n");
	for(i=0;i<size;i++)
	  {
	      printf("%d\t",a[i]);
	  }
	for(i=0;i<size;i++)
	 {
	   if(a[i]!=a[size-1-i])
         break;  
	 }
	 if(i>size/2)
 printf("\nArray is palindrome\n");
else
printf("\nArray is not palindrome\n");
}
