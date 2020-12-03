#include<stdio.h>

void main()
{
   float bs, ts, da=500, pf, gs, ns;
   printf("enter basic salary of employee :");
   scanf("%f",&bs);
   ts=(bs*10)/100;
   printf("ts $%f\n",ts);
   pf=(bs*7.8)/100;
   printf("pf $%f\n",pf);
   gs=bs+da+ts;
   ns=gs-pf;
   printf("gross salary is $%f \n",gs);
   printf("net salary is $%f \n",ns);
   
}
