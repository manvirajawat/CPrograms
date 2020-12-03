#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a no. :");
    scanf("%d",&n);
   printf("even no. for n no.");
    for(i=1;i<=n;i++)
    {
      printf("%d\t",2*i);
    }
   printf("even no. for upto n no.");
    for(i=1;i<=n/2;i++)
    {
      printf("%d\t",2*i);
    }
    printf("\n");

}
