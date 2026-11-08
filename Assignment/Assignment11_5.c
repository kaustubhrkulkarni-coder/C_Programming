/*
Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
*/

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iSValue, int iEValue)
{
    if(iEValue < iSValue)
    {
        printf("you enter invalid value or range");
    }
   
    for(int i = iEValue; i>= iSValue; i--)
    {
        printf("%d ",i);
        
    }
       

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

    RangeDisplayRev(iSValue, iEValue);
    

   
}