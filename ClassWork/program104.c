#include <stdio.h>
#include <stdlib.h>

int CheckPerfact(int iNo){
    int iCnt = 0,iSum = 0;    
    for (iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {         
     
            if((iNo % iCnt) == 0)
            {
               iSum = iSum + iCnt;
            }
    }    

            if(iSum == iNo){
                printf("it is perfaact number");
            } 
            else
            {
                printf("it is not perfaact number");
            }

}
int main()
{
    int iValue = 0;
    
    printf("enter number : \n");
    scanf("%d", &iValue);   

   CheckPerfact(iValue);
    
    return EXIT_SUCCESS;
}

// time complexity : 0(N/2)