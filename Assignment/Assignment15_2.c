/*
Write a program which accept one number from user and check whether that
number is greater than 100 or not.
Input : 101
Output : Greater
*/

#include <stdio.h>
#include <stdlib.h>
typedef int BOOL;
#define true 1
#define false 0

BOOL checkNumber(int iNo)
{
    if (iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    int bRet = false;
    printf("ernter number ");
    scanf("%d", &iValue);

    bRet = checkNumber(iValue);
    if (bRet == true)
    {
        printf("number is grater than 100");
    }
    else
    {
        printf("number is less than 100");
    }
    return EXIT_SUCCESS;
}