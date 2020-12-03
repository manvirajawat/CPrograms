#include<stdio.h>
void swap(int a,int b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("swapping in swap :\n a :%d\n b :%d\n",a,b);
}
void main()
{
   int a,b;
   printf("Enter a and b :");
   scanf("%d%d",&a,&b);
   printf("Before swapping in main :\n a :%d\n b :%d\n",a,b);
   swap(a,b);
   printf("After swapping in main :\n a :%d\n b :%d\n",a,b);
}
