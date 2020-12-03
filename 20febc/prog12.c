#include<stdio.h>
void main()
{
    int n,a=0,i,s;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      //printf("%d\t",a+i);
      s=a+i;
      printf("%d\t",s*s);
      a=i;  
    }
    printf("\n");

}
