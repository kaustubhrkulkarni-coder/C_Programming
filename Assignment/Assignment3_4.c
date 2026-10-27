#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>


void ConvertCase(char cCharPara)
{
     if(cCharPara == toupper(cCharPara)){
        printf("you enter character is in uppercase %c \n", cCharPara);
        cCharPara = tolower(cCharPara);
        printf("converted character in lowercase is %c" , cCharPara);
    }
    else
    {
        printf("you enter character is in lowercase %c \n", cCharPara);
             cCharPara = toupper(cCharPara);
        printf("converted character in uppercase is %c" , cCharPara);
    }
}


int main()
{
    char cChar = '\0';
    printf("Enter character to change case \n");
    scanf("%c",&cChar);

    ConvertCase(cChar); 

}