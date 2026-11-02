#include<stdio.h>
#include<stdlib.h>

int strlenX(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        iCount++;
        str++;

       
    }    
     return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRat = 0;
    printf("enter string \n");
    scanf("%[^'\n']s",Arr);
    iRat = strlenX(Arr);
    printf("String length is : %d\n",iRat);
    return EXIT_SUCCESS;
}