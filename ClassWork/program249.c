#include<stdio.h>
#include<stdlib.h>

int countVowels(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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
    iRat = countVowels(Arr);
    printf("freqency of Vowles is : %d\n",iRat);
    return EXIT_SUCCESS;
}