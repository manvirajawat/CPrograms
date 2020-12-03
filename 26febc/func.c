#include<stdio.h>
void display();
void main()
{
 printf("Before calling\n");
 display();
 printf("After calling\n");
}
void display()
{
   printf("Display function called\n");
}

