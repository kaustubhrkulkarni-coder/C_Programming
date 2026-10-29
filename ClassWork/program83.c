#include <stdio.h>
#include <stdlib.h>

void checkDivisable(int iNo){

    if(iNo % 3 == 0){
        printf("no is divisable by 3");
    }
    else {
                printf("no is not divisable by 3");

    }
   
}

int main(){

    int iValue = 0;
    printf("enter number : \n");
    scanf("%d",&iValue);

    checkDivisable(iValue);

    return EXIT_SUCCESS;
}