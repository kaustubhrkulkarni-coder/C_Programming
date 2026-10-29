#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPerfact(int iNo){
    int iCnt = 0,iSum = 0;    
    for (iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {         
     
            if((iNo % iCnt) == 0)
            {
               iSum = iSum + iCnt;
            }
    }    

            return (iSum == iNo);         
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("enter number : \n");
    scanf("%d", &iValue);   

   bRet = CheckPerfact(iValue);
   if(bRet == true){
    printf("it is perfect number");
   } else
   {
    printf("it is not perfect number");
   }
    
    return EXIT_SUCCESS;
}

// time complexity : 0(N/2)