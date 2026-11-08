/*
Write a program which accept number from user and display its multiplication of
factors.
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
*/
#include<stdio.h>
#include<stdlib.h>

    void MultFact(int iNo)
    {
        
        
        if(iNo < 0 )
        {
            iNo = -iNo;
        }
            int multif = 1;
        for(int i = 1; i<=(iNo / 2); i++){
           
            if(iNo % i == 0){
                multif = multif * i;
            }
        }
         printf("%d ", multif);
    }

int main()
{
    int ivalue = 0;
    
    printf("enter number \n");
    scanf("%d",&ivalue);
   

    MultFact(ivalue);

    return EXIT_FAILURE;
}