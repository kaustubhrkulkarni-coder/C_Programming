#include <stdio.h>
#include <stdlib.h>

long int Factorial(int iNo){
    int iCnt = 0;
    long long iFact = 0;
    for (iCnt = 1, iFact = 1; iCnt <= iNo ; iCnt++){
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    long iRet = 0;
    printf("enter number : \n");
    scanf("%d", &iValue);   

       iRet =  Factorial(iValue);

       printf("Factorial is :%lld \n", iRet);
    
    return EXIT_SUCCESS;
}