#include<stdio.h>
#include<stdlib.h>

int main(){

    float fUnites = 0.0f;
    float fRate = 0.0f;
    float fFinalBiil = 0.0f;
    

    printf("Enter Uintes of lighttbill Unites :- ");
    scanf("%f",&fUnites);
    printf("you enter %f unites \n", fUnites);
    if(fUnites > 0 && fUnites<=100)
        {
            fFinalBiil = fUnites * 5;
            printf("Your light unites are less than more than 0 and more than 100 your bill is %f", fFinalBiil);
        }
        else if (fUnites>100  && fUnites<=200)
        {       
          fFinalBiil = (100 * 5) + ((fUnites - 100) * 7);
          printf("Your light unites are more than 100 and less than 200 your bill is %f", fFinalBiil);
        }
         else if (fUnites>=200)
        {
         fFinalBiil = (100 * 5) + (100 * 7) + ((fUnites - 200) * 10);
             printf("Your light unites are more than 200 your bill is %f", fFinalBiil);
        }

    return EXIT_SUCCESS;
}