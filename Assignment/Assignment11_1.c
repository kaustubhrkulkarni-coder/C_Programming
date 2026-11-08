/*
    Write a program which accept range from user and display all numbers in between
    that range.
    Input : 23 35
    Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int iStartValue, int iEndvalue)
{
    if(iEndvalue < iStartValue){
        printf("invalid range input");
        return;
    }

    for(int i = iStartValue; i<= iEndvalue; i++ ){
        printf("%d ",i);
    }
}

int main()
{

    int iStartValue = 0;
    int iEndvalue = 0;

    printf("Enter strat value :- ");
        scanf("%d",&iStartValue);
    printf("Enter End value :- ");
        scanf("%d",&iEndvalue);

        DisplayRange(iStartValue, iEndvalue);

    return EXIT_SUCCESS;
}