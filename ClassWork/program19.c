#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int iNo){
     if((iNo % 2) == 0){
        return true;
    } 
    else 
    {
        return false;
    }
  }
int main(){
int iValue = 0;
bool bRet = false; // default value of boolean is false i.e. 0 
    printf("enter no :\n");
    scanf("%d", &iValue);
     bRet = CheckEven(iValue);

     if(bRet == true)
     {
        printf("no is even \n");
     }
     else {
         printf("no is odd \n");
     }

    return EXIT_SUCCESS;
}