#include <stdio.h>
#include <stdlib.h>


int main()
{
        printf("Size of int : %zu\n", sizeof(int));
        printf("Size of Char : %zu\n", sizeof(char));
        printf("Size of Float : %zu\n", sizeof(float));
        printf("Size of Double : %zu\n", sizeof(double));
        printf("Size of short int : %zu\n", sizeof(short int));
        printf("Size of long int : %zu\n", sizeof(long int));
        printf("Size of long Double : %zu\n", sizeof(long double));
    
        return EXIT_SUCCESS;
}