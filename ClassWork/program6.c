/*
    step 1: Understand the problem statement
    step 2: write the program
    step 3: Deside the programming language
    step 4: write program
    step 5: test the program 
*/

/////////////////////////////////////////////////////////////////////////////////////////////
// step 1 : understand the problem statment
//          user is going to add 2 integers
//          And we have to perform addition
/////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////
// step 2 : Write the program
/* START
        Accept first number a No1
        Accept second number a No2
        Create the variable as Ans to store result
        Perform the addition and store into Ans
        Display the result from Ans
    STOP    
*/
/////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////
// step 3 : Deside the programming language
//        : we select c programming Language
/////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////
// step 4 : Write thr program
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int num1,int num2){
    int iAns = 0;
    iAns = num1 + num2;
    return iAns;
}

int main(){

int iValue1 = 0, iValue2 = 0, iResult = 0;

printf("enter first number : \n");
scanf("%d", &iValue1);

printf("enter second number : \n");
scanf("%d", &iValue2);

iResult = Addition(iValue1, iValue2);

printf("Addition is : %d", iResult);

return 0;



}