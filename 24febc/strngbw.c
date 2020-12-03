#include<stdio.h>
#include<math.h>
void main()
{
      int n,m,i,j,per,temp,rem,fact;
      printf("Enter initial and final no. :");
      scanf("%d%d",&n,&m);
      printf("Strong numbers between %d to %d is as below :-\n",n,m);
      for(i=n;i<=m;i++)
      {
          per=0;
          temp=i;
          while(temp>0)
           {
              rem=temp%10;
              fact=1;
               for(j=1;j<=rem;j++)
               {
                  fact=fact*j;
               }
               per=per+fact;
               temp=temp/10;
           }
           if(per==i)
           printf("%d\t",per);
      }
   printf("\n");
}
