#include<stdio.h>
void main()
{
   int a,*ptr;
   printf("sizeof(a) :%lu\n",sizeof(a));
   printf("sizeof(ptr) :%lu\n",sizeof(ptr));
   
   float b,*ptr1;
   printf("sizeof(b) :%lu\n",sizeof(b));
   printf("sizeof(ptr1) :%lu\n",sizeof(ptr1));
   
   char c,*ptr2;
   printf("sizeof(c) :%lu\n",sizeof(c));
   printf("sizeof(ptr2) :%lu\n",sizeof(ptr2));
   
   double d,*ptr3;
   printf("sizeof(d) :%lu\n",sizeof(d));
   printf("sizeof(ptr3) :%lu\n",sizeof(ptr3));
}
