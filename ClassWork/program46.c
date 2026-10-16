#include<stdio.h>
#include<stdlib.h>

float Avrage(int iNo1, int iNo2 ,int iNo3){
    float fAns = 0.0f;
    fAns = ((float)iNo1 + (float)iNo2 + (float)iNo3)/3;
    return fAns;
}

int main(){
    int iValue1 = 0,iValue2 = 0, iValue3 = 0;
    float fResult = 0.0f;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);
     printf("enter third number : \n");
    scanf("%d",&iValue3);

  fResult = Avrage(iValue1, iValue2, iValue3);

  printf("Avrage is : %f \n ", fResult);

    return EXIT_SUCCESS;
}