#include<stdio.h>
void main()
{
  int n,sum=0,rem;
  printf("Enter a no. :");
  scanf("%d",&n);
  while(n>0)
  {
    rem=n%10;
   sum=sum+rem;
    n=n/10;
  }
  printf("Sum of given no. :%d\n",sum);
}
