#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{

    if (iNo < 0)
    {
        iNo = -iNo;
    }
        for(int i = 1; i<=5; i++)
        {
            int iNo2 = 1;
            iNo2 = iNo * i;
            printf("%d ", iNo2);
        }
    
}

int main()
{
    int iNumber = 0;

    printf("enter Number \n");
    scanf("%d", &iNumber);

    Display(iNumber);

    return EXIT_SUCCESS;
}