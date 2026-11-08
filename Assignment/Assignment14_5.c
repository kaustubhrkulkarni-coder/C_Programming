/*
Write a program which accept number from user and return difference between
summation of all its factors and non factors.
Input : 12
Output : -34 (16 - 50)
*/
#include<stdio.h>
#include<stdlib.h>

    int MultFact(int iNo)
    {
        if(iNo < 0 )
        {
            iNo = -iNo;
        }
        int iDiff = 0;
        int FactorAdd = 0;
        int nonFactorAdd = 0;
        for(int i = 1; i<=iNo; i++){
            if(iNo % i == 0){
                FactorAdd = FactorAdd + i;
            }
            if(iNo % i != 0){
                nonFactorAdd = nonFactorAdd + i;
            }
        }
        iDiff = FactorAdd - nonFactorAdd;
        return iDiff;
    }

int main()
{
    int ivalue = 0;
    int iRet = 0;
    
    printf("enter number \n");
    scanf("%d",&ivalue);
  
    iRet = MultFact(ivalue);
    printf("summation of all its non factors %d", iRet);

    return EXIT_FAILURE;
}