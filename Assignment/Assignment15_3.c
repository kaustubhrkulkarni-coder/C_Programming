/*
Write a program which accept two numbers and check whether numbers are
equal or not.
Input : 10 10
Output : Equal
*/

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define true 1
#define false 0
BOOL equalOrNot(int iNo1, int iNo2)
{
    if((iNo1 > 0 && iNo2 < 0) || (iNo1 < 0 && iNo2 > 0))
    {
        return false;
    }
    else if (iNo1 != iNo2)
    {
       return false;
    }
    else if (iNo1 == iNo2)
    {
        return true;
    }    
    
}

int main(){
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = false;

    printf("enter first number ");
    scanf("%d",&iValue1);
    printf("enter second value ");
    scanf("%d",&iValue2);

    bRet = equalOrNot(iValue1,iValue2);

    if(bRet == true){
        printf("Equal");
    }
    else
    {
        printf("not equal");
    }

    return EXIT_SUCCESS;
}