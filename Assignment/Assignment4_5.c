// given number is divisable by 5 or not

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define True 1
#define False 0

int CheckDivisibility (int iNo)
{
    if(iNo % 5 == 0){
        return True;
    }
    else
    {
        return False;
    }
}

int main(){
    int iValue = 0;
    BOOL bAns = False;

    printf("enter number to check divisable by 5 or not :- \n");
    scanf("%d",&iValue);

    bAns = CheckDivisibility(iValue);

    if (bAns == True)
    {
        printf("%d Number is divisable by 5",iValue);
    }
    else
    {
        printf("%d Number is not divisable by 5",iValue);
    }
    

    return EXIT_SUCCESS;
}