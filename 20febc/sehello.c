#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(i%5==0)
      printf("Hello\t\t");
      else
      printf("%d\t ",i);
     //printf("\n");
    }
    printf("\n");

}
