#include<stdio.h>
void main()
{
	int a[20],i,size,count=0;
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
	printf("\nNumbers which are greater than 50 in array :\n");
	for(i=0;i<size;i++)
	{
	    if(a[i]>50)
	    {
	      printf("%d\t",a[i]);s
	      count++;
	    }
	}
	printf("\nCount of elements in array which are greater than 50 :%d\n",count);
}
