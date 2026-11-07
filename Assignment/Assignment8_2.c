#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    if (iNo < 0 || iNo >= 10)
    {
        printf("invalid input enter Number less than 0 or less than 10");
    }
    else
    {
        switch (iNo)
        {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;

        default:
            break;
        }
    }
}

int main()
{

    int iNumber = 0;
    printf("Enter Number between 0 to 9 \n");

    scanf("%d", &iNumber);

    Display(iNumber);

    return EXIT_SUCCESS;
}