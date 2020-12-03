#include<stdio.h>
void main()
{
	int a[20],i,size,sum=0;
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
	  sum=sum+a[i];
	  printf("%d\t",a[i]);
	}
	printf("\nSum of array elements :%d\n",sum);
}