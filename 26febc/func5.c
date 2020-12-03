#include<stdio.h>
int a,b;
void var()
{
   printf("Enter a and b :");
   scanf("%d%d",&a,&b);
}
void sub()
{
   var();
   printf("Sub :%d\n",a-b);
}
void add()
{
   var();
   printf("Sum :%d\n",a+b);
}
void mul()
{
 var();
 printf("Mul :%d\n",a*b);
}
void div()
{
  var();
  printf("Div :%d\n",a/b);
}
void main()
{
 add();
 sub();
 mul();
 div();
}


