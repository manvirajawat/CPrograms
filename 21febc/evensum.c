#include<stdio.h>
void main()
{
    int i,a,sum=0;
   
   printf("First 10 even numbers :");
    for(i=1;i<=10;i++)
    {
      a=2*i;
      printf("%d\t",a);
      printf("\n");
      sum=sum+a;
    }
   printf("Sum of first 10 even numbers :%d\n",sum);

}
