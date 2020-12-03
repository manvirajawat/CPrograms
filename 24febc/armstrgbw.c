#include<stdio.h>
#include<math.h>
void main()
{
      int n,m,i,rem,sum,temp,temp1,count;
      printf("Enter initial and final no. :");
      scanf("%d%d",&n,&m);
      printf("Armstrong numbers between %d to %d is as below :-\n",n,m);
      for(i=n;i<=m;i++)
      {
          sum=0;
          count=0;
          temp=i;
          temp1=i;
          
          while(temp>0)
          {
              temp=temp/10;
              count++;
          }
          while(temp1>0)
          {
             rem=temp1%10;
             sum=sum+pow(rem,count);
             temp1=temp1/10;
          }
          if(sum==i)
          //printf("%d\t",sum);
          printf("%d\t",i);
      }
   printf("\n");
}
