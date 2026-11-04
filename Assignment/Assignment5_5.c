#include<stdio.h>
#include<stdlib.h>


int CheckCharacterType(int cValue)
{
     if(cValue >= 65 && cValue <= 90){
          printf("You enter Uppercase letter");
     }
     else if (cValue >= 97 && cValue <= 122)
     {
         printf("You enter Lowercase letter");
     }
     else if (cValue >= 48 && cValue <= 57)
     {
         printf("You enter Digit");
     }

     else if (((cValue >= 33) && (cValue <= 47)) || ((cValue >= 58) && (cValue <= 64)) || ((cValue >= 91) && (cValue <= 96)) || ((cValue >= 123) && (cValue <= 126)));
     {
         printf("You enter Spacial Character");
     }
}

int main(){

    char ch;
    

     printf("enter your charactar :- \n");

     scanf("%c", &ch);
     printf("you enter %c \n", ch);
     int chCode = ch;
     printf("ASCII value of character is %d \n", chCode);

     CheckCharacterType(chCode);
     

     return EXIT_SUCCESS;
}