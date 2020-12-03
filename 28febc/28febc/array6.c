#include<stdio.h>
void main()
{
	int a[20],i,size,f,l;
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
	f=a[0];
	l=a[size-1];
	printf("\nSum of first and last element of array :%d\n",f+l);
}