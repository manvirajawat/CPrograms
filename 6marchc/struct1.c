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

  struct student *s1=&s;

  printf("Roll no. :%d\n",s1->rno);
  printf("Percentage :%.2f\n",s1->per);
  printf("Name :%s\n",s1->name);
}
