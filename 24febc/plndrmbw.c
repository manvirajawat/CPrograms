#include<stdio.h>
void main()
{
      int n,m,i,rem,rev,temp;
      printf("Enter initial and final no. :");
      scanf("%d%d",&n,&m);
      printf("Palindrome numbers between %d to %d is as below :-\n",n,m);
      for(i=n;i<=m;i++)
      {
          rev=0;
          temp=i;
          while(temp>0)
          {
             rem=temp%10;
             rev=rev*10+rem;
             temp=temp/10;
          }
          if(rev==i)
          printf("%d\t",rev);
         // printf("%d\t",i);
      }
   printf("\n");
}
