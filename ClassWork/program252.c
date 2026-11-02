#include<stdio.h>
#include<stdlib.h>

int countX(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str == 'a')||(*str == 'b')||(*str == 'c')||(*str == 'd'))
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
    iRat = countX(Arr);
    printf("freqency of Vowles is : %d\n",iRat);
    return EXIT_SUCCESS;
}