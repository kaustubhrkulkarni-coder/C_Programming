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
int main()
{
    int iValue = 0, iSum = 0, iCount = 0;
    
    float fAvg = 0.0f;

    printf("Enter nuber : \n");
    scanf("%d",&iValue);

    iSum = SumDigit(iValue);
    iCount = CountDigit(iValue);
    fAvg = (float)iSum / (float)iCount; // need of type casting

    printf("No of digit %d : \n",iCount);
    printf("Summnation of digit: %d \n",iSum);
    printf("Avrage of digit : %.2f\n", fAvg);

    return EXIT_SUCCESS;
}