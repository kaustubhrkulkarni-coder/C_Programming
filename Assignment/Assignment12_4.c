/*
Write a program which accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0
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
        if (idigit == 4)
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

    printf("enter count of digit 4 in number ");
    scanf("%d", &iValue);

    iRet = ChkZero(iValue);
    printf("%d", iRet);
    return EXIT_SUCCESS;

}