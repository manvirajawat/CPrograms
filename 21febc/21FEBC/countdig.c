#include<stdio.h>
void main()
{
  int n,count=0;
  printf("Enter a no. :");
  scanf("%d",&n);
  while(n>0)
  {
    n=n/10;
    count++;
  }
  printf("Count digits of given no. :%d\n",count);
}
