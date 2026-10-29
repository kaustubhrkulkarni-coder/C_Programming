// 8967
/* */ 
#include<stdio.h>
#include<stdlib.h>

void DispalyDigit(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
    iDigit = iNo % 10;
    if((iDigit % 2) == 0)
    {
        printf("Even: %d\n  ",iDigit);
    }
    else
    {
        printf("Odd: %d\n  ",iDigit);

    }
    iNo = iNo /10;
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter nuber : \n");
    scanf("%d",&iValue);

    DispalyDigit(iValue);

    return EXIT_SUCCESS;
}