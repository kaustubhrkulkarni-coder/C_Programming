#include<stdio.h>
#include<stdlib.h>

int countSmallX(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
            {
                iCount++;
            }
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
    iRat = countSmallX(Arr);
    printf("freqency of All small letters : %d\n",iRat);
    return EXIT_SUCCESS;
}