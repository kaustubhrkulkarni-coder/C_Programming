#include<stdio.h>
#include<stdlib.h>

int countSpacialX(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str == '$') || (*str == '#') || (*str == '*')|| (*str == '%')|| (*str == '&'))
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
    iRat = countSpacialX(Arr);
    printf("freqency of Spacial letters: %d\n",iRat);
    return EXIT_SUCCESS;
}