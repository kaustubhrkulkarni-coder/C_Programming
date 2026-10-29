/*
-------------------------------------------------------------
( Operation ||  Logical OR )  ( Operation | Bitwise OR ) 
-------------------------------------------------------------
Result1         Result2         Final Result
True            True            True short circuit (due to || (OR operator))
True            False           True short circuit (due to || (OR operator))
False           True            True  
False           False           False 
---------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

void checkDivisable(int iNo){

    if( ((iNo % 3) == 0 ) || ((iNo % 5) == 0) ){

        printf("Number is divisable by 3 OR 5");
    }
    else {
         printf(" Number is not divisable by 3 OR 5");
    }   
}

int main(){

    int iValue = 0;
    printf("enter number : \n");
    scanf("%d",&iValue);

    checkDivisable(iValue);

    return EXIT_SUCCESS;
}