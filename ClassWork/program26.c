#include<stdio.h>
#include<stdlib.h>

int main(){

    char sName[30];

    printf("enter your name :\n");
    scanf("%[^'\n']s", sName); // regural expression Accept string till user press enter (spacial scanf)

    printf("welcome %s\n", sName);

    return EXIT_SUCCESS;
}