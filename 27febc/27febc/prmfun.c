#include<stdio.h>
 int prime(int n)
   {
     int i;
     for(i=2;i<=n/2;i++)
     {
      if(n%i==0)
      {break;}
     }
     if(i>n/2)
     return 0;
     else
     return 1;
   }
void main()
{
  int n,res;
  printf("Enter a no. :");
  scanf("%d",&n);
  res=prime(n);
  if(res==0)
  printf("No. is prime\n");
  else
  printf("Not a prime no.\n");
}
