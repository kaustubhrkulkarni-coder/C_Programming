//Input : 6457

#include<stdio.h>
#include<stdlib.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo < 0)
        {
            iNo = -iNo;
        }
    while (iNo != 0)
    {
    iDigit = iNo % 10;
        iCnt++;
    iNo = iNo /10;
    }    

    return iCnt;
}

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if(iNo < 0)
        {
            iNo = -iNo;
        }
    while (iNo != 0)
    {
    iDigit = iNo % 10;
        iSum = iSum + iDigit;
    iNo = iNo /10;
    }    
    return iSum;
}

float AvrageDigit(int iNo)
{
    int iDigit = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;
    
    if(iNo < 0){
        iNo = -iNo;
    }
    iSum = SumDigit(iNo);
    iCount = CountDigit(iNo);
    fAvg = (float)iSum / (float)iCount; // need of type casting
    return fAvg;    
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter nuber : \n");
    scanf("%d",&iValue);

    fRet = AvrageDigit(iValue);


    printf("Avrage of digit : %.2f\n", fRet);

    return EXIT_SUCCESS;
}