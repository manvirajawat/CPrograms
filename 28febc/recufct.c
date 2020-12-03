#include<stdio.h>
int fact(int n)
{
  if(n==0)
   return 1;
  else
  	return n*fact(n-1);
}
void main()
{ 
  int n,res;
  printf("Enter a no. :");
  scanf("%d",&n);
  res=fact(n);
  printf("Factorial of a number :%d\n",res);
}