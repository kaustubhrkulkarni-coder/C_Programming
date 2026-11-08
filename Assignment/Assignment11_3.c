/*
  Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
*/

#include <stdio.h>
#include <stdlib.h>

int DisplayRange(int iStartValue, int iEndvalue)
{
    if (iEndvalue < iStartValue || iStartValue < 0 || iEndvalue < 0)
    {
        printf("invalid range or input");
        return 0;
    }
     int iAddition = 0;
        for (int i = iStartValue; i <= iEndvalue; i++)
        {
            iAddition = iAddition + i;
        }
        return iAddition;
}

int main()
{

    int iStartValue = 0;
    int iEndvalue = 0;
    int iRet = 0;

    printf("Enter strat value :- ");
    scanf("%d", &iStartValue);
    printf("Enter End value :- ");
    scanf("%d", &iEndvalue);
    iRet = DisplayRange(iStartValue, iEndvalue);
    if(iRet != 0 || iEndvalue > iStartValue && iStartValue >= 0 && iEndvalue >= 0)
    {
        printf("\nAddition of given range is %d", iRet);
    }

   

    return EXIT_SUCCESS;
}