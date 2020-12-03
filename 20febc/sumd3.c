#include<stdio.h>
void main()
{
    int n,f,m,l,sum;
    printf("Enter a no. :");
    scanf("%d",&n);
    f=n/100;
    m=(n/10)%10;
    l=n%10;
    sum=f+l+m;
    printf("Sum of three digit given :%d\n",sum);
}
