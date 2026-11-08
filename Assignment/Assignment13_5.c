/*
Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)
*/

#include <stdio.h>
#include <stdlib.h>

int CountDiff(int iNo)
{

    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iTotalDiff = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        if (iDigit % 2 != 0)
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo / 10;
    }
    printf("%d Even sum\n", iEvenSum);
    printf("%d odd Sum\n", iOddSum);
    iTotalDiff = iEvenSum - iOddSum;
    return iTotalDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("\ndifference between summation of even digits and summation of odd digits is %d ", iRet);

    return EXIT_SUCCESS;
}