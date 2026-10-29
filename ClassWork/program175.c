#include<stdio.h>
#include<stdlib.h>

int Revrse(int iNo){
    int iRev = 0;
    int iDigit = 0;
    while (iNo != 0)
    {
      iDigit = iNo % 10;
    iRev = (iRev * 10)+ iDigit;
      iNo = iNo / 10;  
    }

    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;


    printf("Enter nuber : \n");
    scanf("%d",&iValue);

    iRet = Revrse(iValue);

    printf("%d reverse no is:\n",iRet);
   
    return EXIT_SUCCESS;
}