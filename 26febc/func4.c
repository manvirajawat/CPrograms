#include<stdio.h>
void myFun()
{
   //int a=1;
   static int a=1;
   //if var. is static it shows updated value of that var.
   printf("a :%d\n",a);
   a++;
}
void main()
{
 myFun();
 myFun();
 myFun();
 myFun();
}


