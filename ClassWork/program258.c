#include<stdio.h>
#include<stdlib.h>

int countCapitalX(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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
    iRat = countCapitalX(Arr);
    printf("freqency of All Capital letters : %d\n",iRat);
    return EXIT_SUCCESS;
}