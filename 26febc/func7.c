#include<stdio.h>
 int a,b;
void opera()
{
   printf("Sub :%d\n",a-b);
   printf("Sum :%d\n",a+b);
   printf("Mul :%d\n",a*b);
   printf("Div :%d\n",a/b);
   printf("modul :%d\n",a%b);
}
void main()
{
 printf("Enter a and b :");
 scanf("%d%d",&a,&b);
 opera();
}


