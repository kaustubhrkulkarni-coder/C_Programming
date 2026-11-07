/*
Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
*/

#include<stdio.h>
#include<stdlib.h>
int DisplayOddEvenFactors(int iNo)   
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int evenFactor = 1;
    int oddFactor = 1;
    int diffInFactor = 0;

    for (int i = iNo; i>=1; i--)
    {
        if(i % 2 == 0){
            evenFactor = evenFactor * i;            
        }
        if(i % 2 != 0){
            oddFactor = oddFactor * i;
             
        }           
            
            diffInFactor = evenFactor - oddFactor;
        }

    printf("\n total evenFactor is %d ",evenFactor);
            printf("\n total oddFactor is %d ",oddFactor);
     return diffInFactor;
}

int main(){

    int iNumber = 0;
    int iRet = 0;
    printf("Enter Number ");
    scanf("%d",&iNumber);

   iRet = DisplayOddEvenFactors(iNumber);
    printf("\n%d is diff In Factor",iRet);
    return EXIT_SUCCESS;
}