#include<stdio.h>
void main()
{

   int a,f,l,m,t,sum,sub;
       printf("Enter a four digit no. :");
      scanf("%d",&a);
   
      f=a/1000;
      l=a%10;
      m=a%100;
      t=m/10;
      sum=f+t;
      sub=sum-l;
      
      printf("sum of first and third no. of given no. :%d\n",sum);
       printf("minus of sum and last no. of given no. :%d\n",sub);

}
