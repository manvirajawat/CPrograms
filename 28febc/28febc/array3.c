#include<stdio.h>
void main()
{
	int a[20],i,size,min;
	printf("Enter size of array :");
	scanf("%d",&size);
	printf("\nEnter array element :\n");
	for(i=0;i<size;i++)
	{
	 scanf("%d",&a[i]);
	}
	min=a[0];
	printf("\nArray elements are :\n");
	for(i=0;i<size;i++)
	{
	  printf("%d\t",a[i]);
	  if(min>a[i])
	  	min=a[i];
	}
	printf("\nMinimum value in array elements :%d\n",min);
}