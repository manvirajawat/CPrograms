#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("1/%d\t",i);
    if(i<n)
    printf("+\t");
    }
    printf("\n");

}
