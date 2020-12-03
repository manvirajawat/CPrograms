#include<stdio.h>
void show();
void display()
{
   printf("Display function called\n");
   show();
}
void show()
{
 printf("Show function called\n");
}
void main()
{
 display();
}


