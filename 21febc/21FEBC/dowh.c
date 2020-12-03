#include<stdio.h>
#include<math.h>
void main()
{
  int n,sum=0;
  char ch;
  do
  {
    printf("Enter a no. :");
    scanf("%d",&n);
    sum=sum+n;
    getchar();
    printf("Do you want to continue ?\nIf yes....press y/Y :");
    scanf("%c",&ch);
    }while(ch=='y' || ch=='Y');
    printf("Sum :%d\n",sum);
}
