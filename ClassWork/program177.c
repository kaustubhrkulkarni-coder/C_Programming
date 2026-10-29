#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Palandrom(int iNo){
    int iRev = 0, iTemp = 0,iDigit=0;
    iTemp = iNo;

    while (iNo != 0)
    {
      iDigit = iNo % 10;
      iRev = (iRev * 10)+ iDigit;
      iNo = iNo / 10;  
    }
    if(iRev == iTemp) // issue Resolved
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
    bool bRet = false;


    printf("Enter nuber : \n");
    scanf("%d",&iValue);

    bRet = Palandrom(iValue);
    if(bRet == true){
      printf("no is palandrom");
    }
    else
    {
      printf("no is not palandrom");
    }

    //printf("%d reverse no is:\n",iRet);
   
    return EXIT_SUCCESS;
}