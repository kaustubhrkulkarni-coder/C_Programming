/*
Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
*/

#include<stdio.h>
#include<stdlib.h>

int evenFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iNo2 = 1;
    for( int i = iNo; i>=1; i--)
    {
        if(i % 2 != 0)
        {
            iNo2 = iNo2 * i;
            printf("%d ",i);
        }
    }
    return iNo2;
    
}

int main()
{
    int iNumber = 0;
    int iRet = 0;
    printf("Enter number :- ");
    scanf("%d", &iNumber);

    iRet = evenFactors(iNumber);
    printf("\n%d ODD factors for given number is", iRet);

    return EXIT_SUCCESS;

}