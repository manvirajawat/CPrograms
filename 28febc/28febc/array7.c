#include<stdio.h>
void main()
{
	int a[20],i,size,ecount=0,ocount=0;
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
	  if(a[i]%2==0)
	  	ecount++;
	  else
	  	ocount++;
	}
	printf("\nTotal even numbers in array :%d\n",ecount);
	printf("\nTotal odd numbers in array :%d\n",ocount);
}