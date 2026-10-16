#include<stdio.h>
#include<stdlib.h>

void Maxmimun(int iNo1, int iNo2){


    if(iNo1 > iNo2){
        printf("Maxmimun is %d\n", iNo1);
        int iAns = iNo1;
    }
    else{
        printf("Maxmimun is %d\n", iNo2);
        int iAns = iNo2;
    }

}

int main(){
    int iValue1 = 0,iValue2 = 0, iResult = 0;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);

    Maxmimun(iValue1, iValue2);

    return EXIT_SUCCESS;
}