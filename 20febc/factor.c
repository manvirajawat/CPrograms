#include<stdio.h>
void main()
{
 int n,i,count=0;
 printf("Enter a no. :");
 scanf("%d",&n);
 printf("Factors of a given no. :");
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
  printf("%d\t",i);
  count++;
 }
 printf("\nTotal no. of factors :%d\n",count);
}
