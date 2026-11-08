/*
Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
    Input : 23 30
    Output : 108
*/

#include<stdio.h>
#include<stdlib.h>

int Addition(int iSValue, int iEValue)
{
    if(iEValue < iSValue || iSValue <=0 || iEValue<=0)
    {
        printf("you enter invalid value or range");
        return 0;
    }
    int iAddition = 0;
    for(int i = iSValue; i<= iEValue; i++)
    {
        if(i % 2 == 0){
            iAddition = iAddition + i;
        }
        
    }
        return iAddition;

}



int main()
{
    int iSValue = 0;
    int iEValue = 0;
    int iRet = 0;


    printf("Enter Stary value ");
    scanf("%d",&iSValue);
    printf("Enter exit value ");
    scanf("%d",&iEValue);

    iRet = Addition(iSValue, iEValue);
    if(iRet != 0 || iEValue > iSValue && iSValue >=0 && iEValue >= 0) {
         printf("\n%d Addition of range is ", iRet);
    }

   
}