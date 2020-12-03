#include<stdio.h>
int power(int b,int e)
{
  if(e==0)
   return 1;
  else
  	return b*power(b,e-1);
}
void main()
{ 
  int b,e,res;
  printf("Enter a base and exponent :");
  scanf("%d%d",&b,&e);
  res=power(b,e);
  printf("Factorial of a number :%d\n",res);
}