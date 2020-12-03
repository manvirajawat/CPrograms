#include<stdio.h>
#include<math.h>
void main()
{
  int n,count=0,temp,temp1,rem,sum=0;
  printf("Enter a no. :");
  scanf("%d",&n);
  temp=n;
  temp1=n;
  while(n>0)
  {
    n=n/10;
    count++;
  }
    printf("Count digits of given no. :%d\n",count);
  while(temp>0)
  {
   rem=temp%10;
   sum=sum+pow(rem,count);
   temp=temp/10;
  }
  printf("sum :%d\n",sum);
  if(sum==temp1)
  printf("No. is armstrong\n");
  else
  printf("No. is not armstrong\n");
  
}
