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
  struct student s;
  
  printf("Enter Roll no. :");
  scanf("%d",&s.rno);
  getchar();
  
  printf("Enter Name :");
  scanf("%[^\n]s",s.n.name);
  
  printf("Enter Percentage :");
  scanf("%f",&s.per);
  
  printf("\nStudent Details\n");
  printf("Roll no. :%d\n",s.rno);
  printf("Percentage :%.2f\n",s.per);
  printf("Name :%s\n",s.n.name);
}
