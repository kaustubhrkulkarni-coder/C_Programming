/*
Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
*/

#include <stdio.h>
#include <stdlib.h>

int MultDigits(int iValue)
{
    int iDigit = 0;
    int MultiNum = 1;
    if (iValue < 0)
    {
        iValue = -iValue;
    }

    while (iValue > 0)
    {
        iDigit = iValue % 10; 
        MultiNum = MultiNum * iDigit;
        iValue = iValue / 10;
    }
    return MultiNum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);
    printf("multiplication of all digit is %d ", iRet);

    return EXIT_SUCCESS;
}
