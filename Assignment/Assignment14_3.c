/*
Write a program which accept number from user and display all its non factors.
Input : 12
Output : 5 7 8 9 10 11
*/
#include<stdio.h>
#include<stdlib.h>

    void MultFact(int iNo)
    {
         
        if(iNo < 0 )
        {
            iNo = -iNo;
        }

        for(int i = 1; i<=iNo; i++){
            if(iNo % i != 0){
                printf("output:- %d \n", i);
            }
        }
    }

int main()
{
    int ivalue = 0;
    
    printf("enter number \n");
    scanf("%d",&ivalue);
  
    MultFact(ivalue);

    return EXIT_FAILURE;
}