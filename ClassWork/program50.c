#include <stdio.h>
#include <stdlib.h>

int Minmum(int iNo1, int iNo2, int iNo3, int iNo4)
{
    if ((iNo1 < iNo2) && (iNo1 < iNo3) && (iNo1 < iNo4))
    {
        return iNo1;
    }
    else if ((iNo2 < iNo1) && (iNo2 < iNo3) && (iNo2 < iNo3))
    {
        return iNo2;
    }
    else if ((iNo3 < iNo1) && (iNo3 < iNo2) && (iNo3 < iNo4))
    {
        return iNo3;
    }
    else
    {
        return iNo4;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iValue4 = 0;
    int iResult = 0;

    printf("enter first number : \n");
    scanf("%d", &iValue1);

    printf("enter second number : \n");
    scanf("%d", &iValue2);
    printf("enter third number : \n");
    scanf("%d", &iValue3);
    printf("enter fourth number : \n");
    scanf("%d", &iValue4);

    iResult = Minmum(iValue1, iValue2, iValue3, iValue4);

    printf("Minmum of 3 is : %d \n ", iResult);

    return EXIT_SUCCESS;
}