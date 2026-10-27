#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
typedef char BOOL;
#define True 1
#define False 0

bool ConvertCase(char cCharPara)
{
     cCharPara = tolower(cCharPara);
     if(cCharPara == 'a' || cCharPara == 'e' || cCharPara == 'i' || cCharPara == 'o' || cCharPara == 'u'){
        return True;
        }
    else
    { 
        return False;
     }
}
int main()
{
    char cChar = '\0';
    bool check = False;
    printf("Enter character to change case \n");
    scanf("%c",&cChar);

    check = ConvertCase(cChar); 

    if(check == True)
    {
        printf("Given character  %c is Vowel" , cChar);
    }
    else
    {
        printf("Given character  %c is not Vowel" , cChar);
    }

}