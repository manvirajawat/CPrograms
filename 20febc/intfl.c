#include<stdio.h>
void main()
{
    int n,f,m,m1,l,sum;
    printf("Enter a four no. :");
    scanf("%d",&n);
    f=n/1000;
    m=(n%1000)/100;
    m1=(n%100)/10;
    l=n%10;
    printf("Interchange first and last digit of four digit no.:%d\n",
            l*1000+m*100+m1*10+f*1);

}
