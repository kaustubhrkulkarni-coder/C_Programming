#include<stdio.h>
#include<stdlib.h>

int countDigitsX(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
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
    iRat = countDigitsX(Arr);
    printf("freqency of All Digites : %d\n",iRat);
    return EXIT_SUCCESS;
}