#include<stdio.h>
union student
{
  int rno;
  float per;
  char name[20];
  
};
void main()
{
  union student s;
  
  printf("size of union :%lu\n",sizeof(s));
  printf("Enter Roll no. :");
  scanf("%d",&s.rno);
  printf("Roll no. :%d\n",s.rno);
  getchar();
  
  printf("Enter Name :");
  scanf("%[^\n]s",s.name);
  printf("Name :%s\n",s.name);
  
  printf("Enter Percentage :");
  scanf("%f",&s.per);
  
  printf("Percentage :%.2f\n",s.per);
  
}
