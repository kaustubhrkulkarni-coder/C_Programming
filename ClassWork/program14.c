#include "header.h"

///////////////////////////////////////
// Entry point of the Appliction
//////////////////////////////////////

        int main(){

        int iValue1 = 0, iValue2 = 0, iResult = 0;

        printf("enter first number : \n");
       if( scanf("%d", &iValue1) != 1)
       {
            fprintf(stderr,"unable to proced as invalid input \n");
            return EXIT_FAILURE;
       }

        printf("enter second number : \n");
        if( scanf("%d", &iValue2) != 1)
       {
            fprintf(stderr,"unable to proced as invalid input \n");
            return EXIT_FAILURE;
       }
        iResult = Addition(iValue1, iValue2);

        printf("Addition is : %d", iResult);

        return EXIT_SUCCESS;  // this is called macro
}