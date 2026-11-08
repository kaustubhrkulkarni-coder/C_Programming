/*
 Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
*/

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define true  1
#define false  0

BOOL ChkZero(int iValue)
{
    int idigit = 0;
    while (iValue > 0)
    {
        idigit = iValue % 10;
        if (idigit == 0)
        {
            return true;
        }
        iValue = iValue / 10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("enter number to check 0 is present or not ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);
 if(bRet == true){
    printf("NUmber contain zero");
 }
 else {
     printf("NUmber not contain zero");
 }

    return EXIT_SUCCESS;
}