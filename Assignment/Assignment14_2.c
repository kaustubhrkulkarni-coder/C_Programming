/*
Write a program which accept number from user and display its factors in
decreasing order.
Input : 12
Output : 6 4 3 2 1
*/
#include<stdio.h>
#include<stdlib.h>

    void MultFact(int iNo)
    {
        
        
        if(iNo < 0 )
        {
            iNo = -iNo;
        }

        for(int i = (iNo/2); (iNo / 2)>=1; i--){           
            if(iNo % i == 0){
                printf("%d ", i);
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