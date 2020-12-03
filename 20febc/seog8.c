#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(i%2==0)
    printf("#\t");
    else 
    printf("*\t");
    }
    printf("\n");

}
