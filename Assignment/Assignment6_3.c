#include<stdio.h>
#include<stdlib.h>

    void CalculateDiscount(float fAmount)
    {
        if(fAmount <= 1000)
        {
            printf("%.2f is final amount and no discount is applicable",fAmount);
        }
        else if (fAmount > 1000 && fAmount <5000)
        {
           fAmount = fAmount * 0.90;
           printf("%.2f  is final amount with discount of 10%%",fAmount);
        }
        else if(fAmount >= 5000)
        {
            fAmount = fAmount * 0.80;
            printf("%.2f  is final amount with discount of 20%%",fAmount);
        }
    }

int main(){
    float fAmount = 0.0f;
    int iDiscount = 0;

    printf("Enter Purchase amount :- \n");
    scanf("%f",&fAmount);
    
    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}