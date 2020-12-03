#include<stdio.h>
void main()
{
    int n,a=0,i,s;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      s=2*i;
      printf("%d\t",s*s);
    }
    printf("\n");

}
