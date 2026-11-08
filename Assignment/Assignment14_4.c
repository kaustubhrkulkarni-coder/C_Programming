/*
Write a program which accept number from user and return summation of all its
non factors.
Input : 12
Output : 50
*/
#include<stdio.h>
#include<stdlib.h>

    int MultFact(int iNo)
    {
        if(iNo < 0 )
        {
            iNo = -iNo;
        }
        int nonFactorAdd = 0;
        for(int i = 1; i<=iNo; i++){
            if(iNo % i != 0){
                nonFactorAdd = nonFactorAdd + i;
            }
        }
        return nonFactorAdd;
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