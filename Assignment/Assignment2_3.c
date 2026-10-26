#include<stdio.h>

void Display(int iNo){
    if(iNo < 10){
        printf(" HELLO ");
    } 
    else
    {
        printf("DEMO");
    }
}

int main(){
    int ivalue = 0;
        printf("enter number :- ");
        scanf("%d",&ivalue);

        Display(ivalue);
    return 0;
}