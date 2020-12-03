#include<stdio.h>
void main()
{
 int year;
 printf("Enter any year :");
 scanf("%d",&year);
  if(year%4==0)
  {
     if(year%100==0)
     {
        if(year%400==0)
        printf("Year is a leap year\n");
        else
        printf("Not a leap year\n");
     
     }
   else
   printf("Year is a leap year\n");
  } 
  else
  printf("Not a leap year\n"); 

}
