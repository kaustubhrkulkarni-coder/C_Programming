//8967 -> 6 8
//4268 -> 8 6 2 4
//5799 -> -------
#include<stdio.h>
#include<stdlib.h>

void DispalyOddDigit(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
    iDigit = iNo % 10;
    if((iDigit % 2) != 0) // if((iDigit % 2) == 1) 
    {
        printf("%d\n",iDigit);
    }
    iNo = iNo /10;
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter nuber : \n");
    scanf("%d",&iValue);

    DispalyOddDigit(iValue);

    return EXIT_SUCCESS;
}