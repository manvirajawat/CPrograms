#include<stdio.h>
void main()
{
	int a[20],i,size,temp;
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
	for(i=0;i<size/2;i++)
	{
	  temp=a[i];
	  a[i]=a[size-1-i];
	  a[size-1-i]=temp;
	}
	printf("\nArray elements after reversing :\n");
	for(i=0;i<size;i++)
	{
	  printf("%d\t",a[i]);
	}
	printf("\n");
}