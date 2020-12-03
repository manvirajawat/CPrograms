#include<stdio.h>
#include<math.h>
void main()
{
  int n,i,a=1,b=2,c;
  printf("Enter a no. :");
  scanf("%d",&n);
  printf("Series :%d\t%d\t",a,b);
  for(i=1;i<=n-2;i++)
  {
    c=a*b;
    printf("%d\t",c);
    a=b;
    b=c;
  }
  printf("\n");
}
