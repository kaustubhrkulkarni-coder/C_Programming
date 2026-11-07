#include<stdio.h>
#include<stdlib.h>

 void Display(int iNo)
 {
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for (int i = 1; i < iNo; i++)
    {
        if(i % 2 !=0)
        {
            printf("%d\t",i);
        }
    }
 }

int main(){
    int iNumber = 0;

    printf("enter number \n");
    scanf("%d",&iNumber);

        Display(iNumber);


    return EXIT_SUCCESS;
}