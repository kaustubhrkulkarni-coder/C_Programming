#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define true 1
#define false 0

BOOL CheckEven(int iNo){
    if(iNo % 2 == 0){
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
    BOOL bRet = false;

    printf("Enter no to check Even or Odd :- ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true){
        printf("Given number is EVEN");
    }
    else
    {
         printf("Given number is ODD");
    }
    return EXIT_SUCCESS;
}