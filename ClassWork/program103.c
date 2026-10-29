#include <stdio.h>
#include <stdlib.h>

int sunFactors(int iNo){
    int iCnt = 0,iSum = 0;

    
    for (iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {         
     
            if((iNo % iCnt) == 0)
            {
               iSum = iSum + iCnt;
            }
    }

    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number : \n");
    scanf("%d", &iValue);   

   iRet =  sunFactors(iValue);
   printf(" Summetions of factor : %d\n",iRet);
    
    return EXIT_SUCCESS;
}

// time complexity : 0(N/2)