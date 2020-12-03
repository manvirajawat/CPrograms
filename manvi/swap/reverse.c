#include<stdio.h>

void main()
{
   int n,l,a,m,f,arms;
       printf("Enter a three no. :");
      scanf("%d",&n);
      l=n%10;
      printf("l :%d\n",l);
      a=n%100;
      m=a/10;
      printf("m :%d\n",m);
      f=n/100;
      printf("f :%d\n",f);
      arms=(l*l*l)+(m*m*m)+(f*f*f);
      printf("armstrong of given no. :%d\n",arms);
      (n==arms)?printf("No. is armstrong\n"):printf("No. is not armstrong\n");
   
   
}
