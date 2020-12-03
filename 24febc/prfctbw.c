#include<stdio.h>
#include<math.h>
void main()
{
      int n,m,i,j,sum;
      printf("Enter initial and final no. :");
      scanf("%d%d",&n,&m);
      printf("Perfect numbers between %d to %d is as below :-\n",n,m);
      for(i=n;i<=m;i++)
      {
          sum=0;
          for(j=1;j<=i/2;j++)
         {
           if(i%j==0)
           {
             sum=sum+j;
           }
         }
           if(sum==i)
           printf("%d\t",sum);
      }
   printf("\n");
}
