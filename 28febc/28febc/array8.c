#include<stdio.h>
void main()
{
	int a[20],i,size;
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
	printf("\nTotal even indexing numbers in array :\n");
    for(i=0;i<size;i++)
     {
	  if(i%2==0)
	  	printf("%d\t",a[i]);
	 }
	 printf("\n");
     printf("\nTotal odd indexing numbers in array :\n");
     for(i=0;i<size;i++)
     {
	  if(i%2!=0)
	  	printf("%d\t",a[i]);
	 }
printf("\n");
}