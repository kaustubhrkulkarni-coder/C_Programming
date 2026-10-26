#include<stdio.h>

void Display(int iNo){
     int iCnt = 1;
    while (iNo >= iCnt)
    {
        printf("*");
        iNo--;
    }
}

int main(){

    int iValue = 0;

    printf("enter number :- ");
    scanf("%d",&iValue);
    printf("%d you enter no :-  \n",iValue);
    Display(iValue);
    return 0;
}


