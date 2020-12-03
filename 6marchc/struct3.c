#include<stdio.h>
struct student
{
  int rno;
  float per;
  char name[20];
  
};
void getData(struct student *s)
{
   printf("Enter Roll no. :");
  scanf("%d",&s->rno);
  getchar();
  
  printf("Enter Name :");
  scanf("%[^\n]s",s->name);
  
  printf("Enter Percentage :");
  scanf("%f",&s->per);
}
void display(struct student *s1)
{
  printf("\nStudent Details\n");
  printf("Roll no. :%d\n",s1->rno);
  printf("Percentage :%.2f\n",s1->per);
  printf("Name :%s\n",s1->name);

}
void main()
{
  struct student s;
 getData(&s);
 display(&s);
}
