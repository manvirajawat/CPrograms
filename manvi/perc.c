#include<stdio.h>
void main()
{
   
       float m,p,c,h,e,sum,per;
       printf("Enter marks of five subject \n");
       printf("English :");
      scanf("%f",&e);
      printf("Hindi :");
      scanf("%f",&h);
      printf("Maths :");
      scanf("%f",&m);
      printf("Physics :");
      scanf("%f",&p);
      printf("Chmestriy :");
      scanf("%f",&c);
      sum=e+h+m+p+c;
      per=sum/5;
       if(per>=75 && per<=100)
       {
              printf("Grade : A\n");
       }
      else
      {
            if(per>=60 && per<=75)
            printf("Grade : B\n");
          else
          {
               if(per>=50 && per<=60)
               printf("Grade : C\n");
              else
              {
                      if(per>=33 && per<=50)
                      printf("Grade : D\n");
                     else
                     {
                        printf("You are fail.......\n");
                    }
             }
         }
     }
}
