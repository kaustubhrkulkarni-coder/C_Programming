/*
1.Write a program which accept number from user and return the count of even
digits.
Input : 2395
Output : 1
*/

#include <stdio.h>
#include <stdlib.h>

int CountEven(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iValue < 0){

        iValue = -iValue;

    }

    while (iValue > 0)
    {
        iDigit = iValue % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iValue = iValue / 10 ;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("Count of even number in given digit is %d " ,iRet);

    return EXIT_SUCCESS;
}
