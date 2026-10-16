#include<stdio.h>
#include<stdlib.h>

int main(){
    char sName[30];
    int iAge = 0;
    float fMarkes = 0.0f;

    printf("enter your name :\n");
    scanf("%[^'\n']s", sName); /* 1) Enter remains in input buffer 
    2) regural expression Accept string till user press enter (spacial scanf) */


    printf("Enter your age \n" );
    scanf(" %d",&iAge); // space added 
    printf("Enter your Markes \n" );
    scanf("%f",&fMarkes);

    printf("welcome %s\n", sName);
    printf("your age is %d\n", iAge);
    printf("your age is %f\n", fMarkes);

    return EXIT_SUCCESS;
}