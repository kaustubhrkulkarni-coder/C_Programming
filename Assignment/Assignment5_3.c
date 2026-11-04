#include<stdio.h>
#include<stdlib.h>

void DispalyGrade(float Markes)
{
     if (Markes >=90 && Markes <= 100)
     {
          printf("Student pass with Grade A");
     }
      else if (Markes >=75 && Markes <= 89)
     {
          printf("Student pass with Grade B");
     }
      else if (Markes >=60 && Markes <= 74)
     {
          printf("Student pass with Grade C");
     }
      else if (Markes >=40 && Markes <= 59)
     {
          printf("Student pass with Grade D");
     }
    else if (Markes >= 0 && Markes <= 40)
     {
          printf("Student Is fail As Sutdent have below 40 Markes");
     }
     else
     {
         printf("You enter Invalid value");
     }
}


int main()
{
     float fValue = 0.0f;
     printf("Enter markes of student \n");
     scanf("%f", &fValue);
     printf("%f you enter value is\n",fValue);
     
     DispalyGrade(fValue);

     return EXIT_SUCCESS;
}