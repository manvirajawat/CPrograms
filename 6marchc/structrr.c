#include<stdio.h>
struct student
{
  int rno;
  float per;
  struct Name
  {
    char name[20];
  }n;
}s;
void main()
{
  struct student s[20];
  int n,i;
  
  printf("Enter number of students :");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
     printf("\nEnter %d student details\n",i+1);
     printf("Enter Roll no. :");
     scanf("%d",&s[i].rno);
     getchar();
  
    printf("Enter Name :");
    scanf("%[^\n]s",s[i].n.name);
  
    printf("Enter Percentage :");
    scanf("%f",&s[i].per);
  }
  
  printf("\n\t\t\tStudent Details\n");
  printf("\n------------------------------------------------------\n");
  printf("Roll no.\tName\t\tPercentage");
  printf("\n------------------------------------------------------\n");
   for(i=0;i<n;i++)
   { 
     printf("%d\t\t%s\t%.2f\t\n",s[i].rno,s[i].n.name,s[i].per);       
   }
    printf("\n------------------------------------------------------\n");
}
