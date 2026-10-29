#include <stdio.h>
#include <stdlib.h>

void Display(int iNo){
    int icnt = 0;

    for(icnt = iNo; icnt>=1; icnt--){
        printf("%d\t", icnt);

    }
printf("\n");
}

int main(){
    int iValue = 0;

    printf("enter the frequency\n");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;
}