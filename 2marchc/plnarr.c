#include<stdio.h>
void main()
{
   	int a[20],i,size,index,value;
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

	    printf("Enter index :");
    scanf("%d",&index);
    printf("Enter value :");
    scanf("%d",&value);

   for(i=size-1;i>=index;i--)
   {
     a[i+1]=a[i];
   }
   a[index]=value;

   printf("\nArray elements are :\n");
	  for(i=0;i<=size;i++)
	  {
	      printf("%d\t",a[i]);
	  } 
 printf("\n");
}
