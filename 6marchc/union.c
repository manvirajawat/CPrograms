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
  getchar();
  
  printf("Enter Name :");
  scanf("%[^\n]s",s.name);
  
  printf("Enter Percentage :");
  scanf("%f",&s.per);
  
  printf("\nStudent Details\n");
  printf("Roll no. :%d\n",s.rno);
  printf("Percentage :%.2f\n",s.per);
  printf("Name :%s\n",s.name);
}
