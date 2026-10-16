#include<stdio.h>
#include<stdlib.h>

int main(){
    int iValue1 = 0,iValue2 = 0, iResult = 0;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);

    if(iValue1 > iValue2){
        printf("Maxmimun is %d\n", iValue1);
    }
    else{
        printf("Maxmimun is %d\n", iValue2);
    }

    return EXIT_SUCCESS;
}