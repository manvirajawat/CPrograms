#include<stdio.h>
struct student
{
  int rno;
  float per;
  char name[20];
  
};
void main()
{
  struct student s={1000,67.25,"Andrew Anday"};
  printf("Roll no. :%d\n",s.rno);
  printf("Percentage :%.2f\n",s.per);
  printf("Name :%s\n",s.name);
}
