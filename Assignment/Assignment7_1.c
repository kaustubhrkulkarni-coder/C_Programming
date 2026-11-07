#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo){
    if (iNo < 0 ){
        iNo = -iNo;
    }
        for( int i = 1; i<=iNo; i++)
        {
            printf("$\t*\t");
        }
    }

int main()
{

int iNumber = 0;

printf("enter number \n");
scanf("%d",&iNumber);

pattern(iNumber);

    return EXIT_SUCCESS;
}