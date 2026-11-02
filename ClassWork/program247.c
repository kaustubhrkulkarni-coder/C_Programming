#include<stdio.h>
#include<stdlib.h>

int countx(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str == 'A') || (*str == 'a'))
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
    iRat = countx(Arr);
    printf("freqency of a is : %d\n",iRat);
    return EXIT_SUCCESS;
}