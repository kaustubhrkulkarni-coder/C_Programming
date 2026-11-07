#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo){

    if(iNo < 0 )
    {
        iNo = -iNo;
    }
    for(int i = 1; i<=iNo; i++)
    {
        printf("%d\t",i);
    }

}

int main ()
{
    int iNumber = 0;
    printf("Enter number \n");
    scanf("%d",&iNumber);

    pattern(iNumber);
return EXIT_SUCCESS;
}