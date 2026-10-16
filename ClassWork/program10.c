#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int no = 0;

    printf("Enter number :\n");
    if(scanf("%d",&no)!=1)
    {
        printf("invalid input");

        return EXIT_FAILURE;
    }

    
printf("input is valid");
    return EXIT_SUCCESS;
}