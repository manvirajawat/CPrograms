#include<stdio.h>
#include<math.h>
void main()
{
      int n,m,i,j;
      printf("Enter initial and final no. :");
      scanf("%d%d",&n,&m);
      printf("Factors of numbers between %d to %d is as below :-\n",n,m);
      for(i=n;i<=m;i++)
      {
        printf("%d :",i);
         for(j=1;j<=i;j++)
         {
           if(i%j==0)
           printf("%d\t",j);
         }
         printf("\n");
      }
   printf("\n");
}
