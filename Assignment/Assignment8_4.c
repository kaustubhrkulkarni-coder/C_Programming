//Write a program which accept number from user and display its table.
/*
    Input : 5
    Output : 5 10 15 20 25 30 35 40 45 50
*/

#include<stdio.h>
#include<stdlib.h>
void DispalyTable(int iNo)
{
    if(iNo < 0){
        iNo = -iNo;
    }
    for(int i = 1; i<=10; i++)
    {
        int iNo2 = 1;
        iNo2 = iNo * i;
        printf("%d ",iNo2);
    }
}

int main ()
{
    int iNumber = 0;
    printf("Enter number :- ");
    scanf("%d",&iNumber);

        DispalyTable(iNumber);

    return EXIT_SUCCESS;
}