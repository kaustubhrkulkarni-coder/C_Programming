#include <stdio.h>
#include <stdlib.h>

void checkDivisable(int iNo){

    if(iNo % 5 == 0){
        printf("Number is divisable by 5");
    }
    else {
                printf(" Number is not divisable by 5");

    }
   
}

int main(){

    int iValue = 0;
    printf("enter number : \n");
    scanf("%d",&iValue);

    checkDivisable(iValue);

    return EXIT_SUCCESS;
}