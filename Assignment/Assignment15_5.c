/*
    Write a program which accept total marks & obtained marks from user and
calculate percentage.
Handle the condition if number is 0
Input : 1000 745
Output : 74.5%
*/
#include<stdio.h>
#include<stdlib.h>

float percentage (float iMarkes, float iOMarkes)
{
    float percent = 0.0f;
    if((iMarkes != 0) && (iOMarkes != 0)){
         percent = (iOMarkes / iMarkes)*100;
         return percent;
    }
    else {
        printf("enter markes or obtained markes are less than or equal to zero");
        return 0;
    }
}

int main(){
    int itotalMrakes = 0 ,iobtainMarkes = 0;
    float fRet = 0.0f;

    printf("enter total markes ");
    scanf("%d",&itotalMrakes);
    printf("enter obtained markes ");
    scanf("%d",&iobtainMarkes);

    fRet = percentage(itotalMrakes, iobtainMarkes);

    if(fRet !=0 || (itotalMrakes > 0) && (iobtainMarkes > 0))
    {
        printf("\n%.2f ",fRet);
    }

    
}
