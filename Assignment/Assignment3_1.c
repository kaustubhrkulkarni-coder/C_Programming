#include<stdio.h>
#include<stdlib.h>

void showEven(int iNo)
{
    if (iNo <= 0)
    {
        printf("enter positive number");
        return;
    }
    int iCnt = 1;
    while (iCnt <= iNo * 2)
    {
            if((iCnt % 2) == 0)
            {
                printf(" OUTPUT:-  %d\n",iCnt);
            }
            iCnt++;
    }

}

int main()
{

int iValue = 0;

printf("Enter number to check ALL even number : - ");
scanf("%d",&iValue);
printf("%d you enter \n",iValue);
   showEven(iValue);

    return EXIT_SUCCESS;
}