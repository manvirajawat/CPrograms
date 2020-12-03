#include<stdio.h>
void main()
{
    int n,f,m,m1,l,sum;
    printf("Enter a four no. :");
    scanf("%d",&n);
    f=n/1000;
    m=(n%1000)/100;//m=(n/100)%10;
    m1=(n%100)/10;//m1=(n/10)%10;
    l=n%10;
    sum=f+l+m+m1;
    printf("Sum of four digit given :%d\n",sum);
}
