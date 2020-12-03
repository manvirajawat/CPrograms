#include<stdio.h>
 int fact (int n)
       {
        int i,fct=1;  
        for(i=1;i<=n;i++)
        {
          fct=fct*i;
        }
       return fct;
     }
void main()
{
    int n,res;
    printf("Enter a no. :");
    scanf("%d",&n);
    res=fact(n);
   printf("Factorial of a no. :%d\n",res);
}
      
