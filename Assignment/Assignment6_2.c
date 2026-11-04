#include<stdio.h>
#include<stdlib.h>
void CheckAdmission(float iAge, float fMarkes){
    if((iAge < 0 && iAge > 100 )||(fMarkes < 0 && fMarkes > 0))
    {
        printf("Input is invalid");
    }
    else if(iAge >= 17 && fMarkes >= 60 )
    {
        printf("Student is eligible for Admission");
    }
    else
    {
        printf("Student is not eligible for Admission");
    }
}

int main(){

    float fMarkes = 0.0f;
    int iAge = 0;

        printf("Enter Age:- \n");
        scanf("%d",&iAge);
        printf("enter Markes :-\n");
        scanf("%f",&fMarkes);
        printf("you enter %d Age and %.2f Markes \n", iAge, fMarkes);

    CheckAdmission(iAge,fMarkes);

    return EXIT_SUCCESS;
}