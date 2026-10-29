

#include <stdio.h>
#include <stdlib.h>

int Summntion(int iNo){
    int iCnt = 0, iSum = 0;
    for (iCnt = 1; iCnt <= iNo ; iCnt++){
        iSum = iSum + iCnt;
    }
    return iSum;
}


int main()
{
    int iValue = 0, iRet = 0;
    printf("enter number : \n");
    scanf("%d", &iValue);   

       iRet =  Summntion(iValue);

       printf("Summntion is :%d \n", iRet);
    
    return EXIT_SUCCESS;
}