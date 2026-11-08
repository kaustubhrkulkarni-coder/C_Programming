/*
    Write a program which accept number from user and display its digits in reverse
order.
Input : 2395
Output : 5 9 3 2
*/

#include<stdio.h>
#include<stdlib.h>

void DispalyDigit(int iValue)
{

    int iDigit = 0;

    if(iValue < 0){
        iValue = -iValue;
    }

    while (iValue > 0)
    {
        iDigit = iValue % 10;
        printf("%d ",iDigit);
        iValue = iValue / 10;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number to print reverse ");
    scanf("%d",&iValue);

    DispalyDigit(iValue);

    return EXIT_SUCCESS;
}