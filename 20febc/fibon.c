#include<stdio.h>
void main()
{
 int n,i,a=-1,b=1,c;
 printf("Enter a no. :");
 scanf("%d",&n);
 printf("Fibonacci series of given no.\n");
 for(i=1;i<=n;i++)
 {
  c=a+b;
  printf("%d\n",c);
  a=b;
  b=c;
 }
 
}
