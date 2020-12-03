#include<stdio.h>
void main()
{
 int n,i,sum=0;
 printf("Enter a no. :");
 scanf("%d",&n);
 for(i=1;i<=n/2;i++)
 {
  if(n%i==0)
    sum=sum+i;
 }
 printf("sum :%d\n",sum);
  if(sum==n)
  printf("No. is perfect no.\n");
  else
  printf("No. is not perfect no.\n");
}
