#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int BOOL;
#define True 1
#define False 0

 bool isEVEN(BOOL iValue)
 {
    if(iValue % 2 == 0)
    {
       return True;
    }
    else
    {
       return False;
    }
 }

int main()
{
    int iNo = 0;
    bool bCheck = false;

    printf("Enter number to check given number is EVEN OR ODD :- ");
    scanf("%d",&iNo);
    bCheck = isEVEN(iNo);

    if(bCheck == True)
        {
            
            printf("%d is EVEN number",iNo);
        }
        else
        {
            printf("%d is ODD number",iNo);
        }

    return EXIT_SUCCESS;
}