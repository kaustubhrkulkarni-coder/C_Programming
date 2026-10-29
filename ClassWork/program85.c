/*
---------------------------------------------------
        Operation &&
---------------------------------------------------
Result1         Result2         Final Result
True            True            True
True            False           False
False           True            True  short circuit 
False           False           False short circuit 
---------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

void checkDivisable(int iNo){

    if( ((iNo % 3) == 0 ) && ((iNo % 5) == 0) ){

        printf("Number is divisable by 3 and 5");
    }
    else {
         printf(" Number is not divisable by 3 and 5");
    }   
}

int main(){

    int iValue = 0;
    printf("enter number : \n");
    scanf("%d",&iValue);

    checkDivisable(iValue);

    return EXIT_SUCCESS;
}