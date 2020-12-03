#include<stdio.h>
 int add()
 {
   int a,b;
   printf("Enter a and b :");
   scanf("%d%d",&a,&b);
   return a+b;
 }
 void main()
 {
   int res;
   /*res=add();
   printf("Sum :%d\n",res);*/
   printf("Sum :%d\n",add());
 }
