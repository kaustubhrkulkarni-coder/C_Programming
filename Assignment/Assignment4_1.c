#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int BOOL;
#define True 1
#define False 0

 bool iSPositive(BOOL iValue)
 {
    if(iValue > 0)
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

    printf("Enter number to check given number is positive or negative :- ");
    scanf("%d",&iNo);
    bCheck = iSPositive(iNo);

    if(bCheck == True)
        {
            
            printf("%d is Positive number",iNo);
        }
        else
        {
            printf("%d is Negative number",iNo);
        }

    return EXIT_SUCCESS;
}