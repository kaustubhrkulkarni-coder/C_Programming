#include<stdio.h>
#include<stdlib.h>

int CheckMultipleDivisibility(int iValue)
{
     if((iValue % 3) == 0 && (iValue % 5) == 0){
          printf("Entered number is divisible by both 3 and 5");
     }
     else if ((iValue % 3) == 0 && (iValue % 5) != 0)
     {
          printf("Entered number is divisible by only 3 and NOT BY 5");
     }
     else if ((iValue % 3) != 0 && (iValue % 5) == 0)
     {
          printf("Entered number is divisible by only 5 and NOT BY 3");
     }
     else{
          printf("Entered number is not divisible by 5 as well as by 3");
     }
}

int main(){

     int iValue = 0;
     printf("Enter number to check it divisible by 3 OR 5 Or only 3 OR only 5 \n");
     scanf("%d", &iValue);
     
     CheckMultipleDivisibility(iValue);
     
     
     return EXIT_SUCCESS;
}