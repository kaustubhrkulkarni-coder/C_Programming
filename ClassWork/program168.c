//Input : 6457
//45
#include<stdio.h>
#include<stdlib.h>

int AvrageDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCounter = 0;
    float fAvg = 0.0f;
    if(iNo < 0)
        {
            iNo = -iNo;
        }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iCounter++;
        iNo = iNo / 10;
    }

    fAvg = iSum / iCounter;
    return fAvg;    
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter nuber : \n");
    scanf("%d",&iValue);

    fRet = AvrageDigit(iValue);


    printf("Avrage of digit : %f \n", fRet);

    return EXIT_SUCCESS;
}