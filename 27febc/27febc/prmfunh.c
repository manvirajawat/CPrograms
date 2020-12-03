#include<stdio.h>
#include"prime.h"
void main()
{
  int n,res;
  printf("Enter a no. :");
  scanf("%d",&n);
  res=prime(n);
  if(res==0)
  printf("No. is prime\n");
  else
  printf("Not a prime no.\n");
}
