// Factorial program
#include <stdio.h>
#include <stdlib.h>

int factorial(int iNo)
{
    int iNo2 = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int i = iNo; i >= 1; i--)
    {
        iNo2 = iNo2 * i;
    }
    return iNo2;
}

int main()
{
    int iNumber = 0;
    int iRet = 0;

    printf("enter Number :- ");
    scanf("%d", &iNumber);

    iRet = factorial(iNumber);
    printf("%d", iRet);
}