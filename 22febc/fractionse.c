#include<stdio.h>
void main()
{
    int n,i;
    float sum=0;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     printf("1/%d",i);

     //sum=sum+(1/(float)i);
     sum=sum+(1.0/i);
     if(i<n)
     printf("+");
    }
    printf("\n");
    printf("Sum of above series:%.2f\n",sum);


}
