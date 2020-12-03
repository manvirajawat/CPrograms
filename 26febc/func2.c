#include<stdio.h>
void show()
{
 printf("Show function called\n");
}
void display()
{
   printf("Display function called\n");
   show();
}
void main()
{
 display();
}


