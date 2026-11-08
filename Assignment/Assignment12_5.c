/*
Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input : 2395
Output : 3
*/

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define true  1
#define false  0

BOOL ChkZero(int iValue)
{
    int idigit = 0;
    int iCnt = 0;
    while (iValue > 0)
    {
        idigit = iValue % 10;
        if (idigit < 6)
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

    printf("enter digit to check how many digit are less than 6 :- ");
    scanf("%d", &iValue);

    iRet = ChkZero(iValue);
    printf("%d numbers are less than 6", iRet);
    return EXIT_SUCCESS;

}