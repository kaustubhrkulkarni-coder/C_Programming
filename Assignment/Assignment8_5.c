/*
Write a program which accept number from user and display its table in reverse order.
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayTableReverse(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i=10;i>=1;i--)
    {
        int iNo2 = 1;
        iNo2 = i * iNo;
        printf("%d ",iNo2);
    }
}



int main()
{
    int inumber = 0;
    printf("enter number ");
    scanf("%d",&inumber);
       
        DisplayTableReverse(inumber);

    return EXIT_SUCCESS;
}