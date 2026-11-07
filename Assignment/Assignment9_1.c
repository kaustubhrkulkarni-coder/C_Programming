/*
Write a program which accept number from user and display below pattern.
Input : 5
Output : * * * * * # # # # #
*/

#include<stdio.h>
#include<stdlib.h>

void DispalyPattern(int iNo)
{
    if(iNo < 0){
        iNo = -iNo;
    }
    for(int i =1; i<= (iNo*2); i++){
        if(i<=iNo)
        {
            printf("* ");
        }
        else if (i>iNo && i<=(iNo * 2))
        {
            printf("# ");
        }
        
    }
}

int main()
{
    int iNumber = 0;

    printf("enter number :- ");
    scanf("%d",&iNumber);

    DispalyPattern(iNumber);

    return EXIT_SUCCESS;
}