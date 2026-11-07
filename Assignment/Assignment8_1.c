#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo > 0 && iNo < 50)
    {
        printf("Small");
    }
    else if (iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if (iNo > 100)
    {
        printf("Large");
    }
    
}

int main()
{

    int iNumber = 0;
    printf("Enter number \n");
    scanf("%d",&iNumber);

        Display(iNumber);

    return EXIT_SUCCESS;
}