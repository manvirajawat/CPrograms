#include<stdio.h>
void main()
{
 int n,i,t;
 printf("Enter a no. :");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
   t=n*i;
    printf("%d x %d = %d\n",n,i,t);
 }
}
