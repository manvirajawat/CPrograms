#include<stdio.h>
void main()
{

   int a,b,temp;
       printf("Enter a and b :");
      scanf("%d%d",&a,&b);
   
      printf("Before swapping :\n");
      printf("a : %d\n",a);
      printf("b: %d\n",b);
      
      temp=a;
      a=b;
      b=temp;
      
      printf("After swapping :\n");
      printf("a : %d\n",a);
      printf("b: %d\n",b);

}
