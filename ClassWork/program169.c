//Input : 6457

#include<stdio.h>
#include<stdlib.h>

int AvrageDigit(int iNo)
{
    int iDigit = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;
    
    if(iNo < 0){
        iNo = -iNo;
    }

    while (iNo !=0)
    {
        iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iCount++;
        iNo = iNo / 10;
    }
    fAvg = iSum / iCount; // need of type casting
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