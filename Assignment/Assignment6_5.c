#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(int iYears, float fSalary)
{
    float fBonus = 0.0f;
    if (iYears < 0 || fSalary < 0)
    {
        printf("Invalid input \n");
        return;
    }
    if(iYears > 0 && iYears >= 10){
        fBonus = fSalary * 0.15;
        printf("bonus is %0.2f As your work experiance is more than 10 years",fBonus);
    }
    else if(iYears < 10 && iYears > 5){
        fBonus = fSalary * 0.10;
        printf("bonus is %0.2f As your work experiance is more than 5 years and less tahn 10 years",fBonus);
    }
     else if(iYears > 0 && iYears < 5){
        fBonus = fSalary * 0.05;
        printf("bonus is %0.2f As your work experiance is less than 5 years",fBonus);
    }
  
}

int main()
{
    int iYears = 0;
    float fSalary = 0.0f;

    printf("enter the years of working and enter the salary :-  \n");
    scanf("%d %f",&iYears,&fSalary);

    CalculateBonus(iYears, fSalary);


    return EXIT_SUCCESS;
}