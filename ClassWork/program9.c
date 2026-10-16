#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : Addition
//  Input         : Integer, Integer
//  Output        : Interger
//  Description   : Performs addition
//  Date          : 04/10/2026
//  Author        : Kaustubh Ramesh Kulkarni
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Addition(
                int num1, //first Input
                int num2  //second Input
            )
{
    int iAns = 0;

    iAns = num1 + num2; // business logic
    
    return iAns;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Entry point of the Application
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        int main(){

        int iValue1 = 0, iValue2 = 0, iResult = 0;

        printf("enter first number : \n");
        scanf("%d", &iValue1);

        printf("enter second number : \n");
        scanf("%d", &iValue2);

        iResult = Addition(iValue1, iValue2);

        printf("Addition is : %d", iResult);

        return EXIT_SUCCESS;  // this is called macro
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Step 5 :    Test the program
//  
//  Tested test cases
//-------------------------------------------------------------------------
//  Input1      Input2      Output
//-------------------------------------------------------------------------
//    10          11          21
//    11          0           11
//    0           11          11
//    20          -9          11
//    -9          20          11
//   -20         -11         -31
////////////////////////////////////////////////////////////////////////////////////////////////////////////////