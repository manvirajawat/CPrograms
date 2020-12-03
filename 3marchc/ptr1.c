#include<stdio.h>
void main()
{
   int a,*ptr,**ptr1;
  printf("Enter value of a :");
  scanf("%d",&a);
  
   printf("value of a :%d\n",a);
   printf("Address of a :%p\n",&a);
   
   ptr=&a;
   printf("Address of ptr :%p\n",&ptr);
   printf("Address which ptr holds :%p\n",ptr);
    printf("value at address which ptr holds :%d\n",*ptr);
    
    ptr1=&ptr;
    printf("Address of ptr1 :%p\n",&ptr1);
   printf("Address which ptr1 holds :%p\n",ptr1);
    printf("Address at address which ptr1 holds :%p\n",*ptr1);
     printf("value at address which *ptr1 holds :%d\n",**ptr1);
}
