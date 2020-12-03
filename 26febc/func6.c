#include<stdio.h>
 int a,b;
void sub()
{
   printf("Sub :%d\n",a-b);
}
void add()
{
   printf("Sum :%d\n",a+b);
}
void mul()
{
 printf("Mul :%d\n",a*b);
}
void div()
{
  printf("Div :%d\n",a/b);
}
void main()
{
 printf("Enter a and b:");
 scanf("%d%d",&a,&b);
 add();
 sub();
 mul();
 div();
}


