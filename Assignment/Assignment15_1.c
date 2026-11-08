/*
Write a program which accept name from user and print that name.
Input : Kaustubh Ramesh Kulkarni
Output :Kaustubh Ramesh Kulkarni
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
char Name[30];
        printf("enter your Name ");
        scanf("%[^'\n']s",Name);
        printf("%s",Name);


    return EXIT_SUCCESS;
}