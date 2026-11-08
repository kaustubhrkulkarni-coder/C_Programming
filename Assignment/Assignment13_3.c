/*
Write a program which accept number from user and return the count of odd
digits.
Input : 2395
Output : 3
*/

#include <stdio.h>
#include <stdlib.h>

int CountRange(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
    if (iValue < 0)
    {
        iValue = -iValue;
    }

    while (iValue > 0)
    {
        iDigit = iValue % 10;
        if ((iDigit > 3) && (iDigit < 7))
        {
            iCnt++;
        }
        iValue = iValue / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);
    printf("Count of grater than 3 and less than 7 digit is %d ", iRet);

    return EXIT_SUCCESS;
}
