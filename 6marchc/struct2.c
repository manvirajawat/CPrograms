#include<stdio.h>
struct student
{
  int rno;
  float per;
  char name[20];
  
};
void main()
{
  struct student s;
  
  printf("Enter Roll no. :");
  scanf("%d",&s.rno);
  getchar();
  
  printf("Enter Name :");
  scanf("%[^\n]s",s.name);
  
  printf("Enter Percentage :");
  scanf("%f",&s.per);
  
  printf("Student Details");
  printf("Roll no. :%d\n",s.rno);
  printf("Percentage :%.2f\n",s.per);
  printf("Name :%s\n",s.name);
}
