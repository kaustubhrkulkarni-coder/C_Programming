#include<stdio.h>
#include<stdlib.h>

float Avrage(int iNo1, int iNo2){
    float fAns = 0.0f;
    fAns = (iNo1 + iNo2)/2;

    return fAns;
}

int main(){
    int iValue1 = 0,iValue2 = 0; 
    float fResult = 0.0f;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);

  fResult = Avrage(iValue1, iValue2);

  printf("Avrage is : %f \n ", fResult);

    return EXIT_SUCCESS;
}