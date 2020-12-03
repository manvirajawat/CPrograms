#include<stdio.h>
void main()
{
	int a[20],i,size,rem,rev;
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
   printf("\nArray elements after reversing each element :\n");
	for(i=0;i<size;i++)
	   {
	      rev=0;
	      while(a[i]>0)
	       {
	          rem=a[i]%10;
	          rev=rev*10+rem;
	          a[i]=a[i]/10;
	     }
	   printf("%d\t",rev);  
	 }
	printf("\n");
}
