/*
Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input : 10
Output : 700
*/

#include<stdio.h>
#include<stdlib.h>

int ExchangeAmount(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iRuppes = 0;
    iRuppes = 70 * iNo;
    
    return iRuppes;
}

int main()
{
    int iAmount = 0;
    int iRet = 0; 
    printf("enter amount :- ");
    scanf("%d",&iAmount);

        iRet = ExchangeAmount(iAmount);
        printf("Value in INR is %d", iRet);

    return EXIT_SUCCESS;
}