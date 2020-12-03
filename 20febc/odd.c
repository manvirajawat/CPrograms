#include<stdio.h>
void main()
{
    int n,a=0,i;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("%d\t",a+i);
      a=i;  
    }
    printf("\n");

}
