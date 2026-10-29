#include <stdio.h>
#include <stdlib.h>


int main(){
    int icnt = 0;
    int isum = 0;

    icnt = 1;
    // iSum = 0 +1; -> 1
    isum = isum + icnt;
    icnt++; //2

    // iSum = 1 +2; -> 3
    isum = isum + icnt;
    icnt++; //3

    // iSum = 3 + 3; -> 3
    isum = isum + icnt;
    icnt++; // 4

    // iSum = 6 + 4; -> 10
    isum = isum + icnt;
    icnt++; //5

    printf("%d", isum); // 10


    return EXIT_SUCCESS;
}