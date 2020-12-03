#include<stdio.h>
void main()
{
    int n,sum=0,i;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+i;
      // sum+=i;
    }
    printf("sum of n natural no. :%d\n",sum);

}
