#include<stdio.h>
#include<stdlib.h>

void countFrequencyX(char *str)
{
    int iCountSmall = 0,iCountCapital = 0, iCountdigit = 1;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z') )
        {
            iCountCapital++;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if ((*str >= '0') && (*str <= '9'))
        {
            iCountdigit++;
        }
        str++;
    }
printf("no of cpital letters: %d\n", iCountCapital);
printf("no of small letters: %d\n", iCountSmall);
printf("no of digit letters: %d\n", iCountdigit);
}

int main()
{
    char Arr[100] = {'\0'};
    int iRat = 0;
    printf("enter string \n");
    scanf("%[^'\n']s",Arr);
    countFrequencyX(Arr);

    //printf("freqency of Spacial letters: %d\n",iRat);
    
    return EXIT_SUCCESS;
}