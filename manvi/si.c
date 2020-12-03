#include<stdio.h>
void main()
{

float p,r,t,si;
   printf("Enter the principal, rate and time:");
   scanf("%f%f%f",&p,&r,&t);
   
     si=(p*r*t)/100;
      
      printf("SI :%.2f\n",si);

}
