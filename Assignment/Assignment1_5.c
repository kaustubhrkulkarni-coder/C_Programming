#include<stdio.h>

void Dispaly(int ivalue)
{   int i = 0;
    for ( int i = 1; i <= ivalue; i++)
    {
       printf("%d \t*\t",i);
    }
}

int main(){
        int iNo = 0;
        int iRep = 0;
        printf("enter number \n");
        scanf("%d",&iNo);    

        Dispaly(iNo);
    return 0;
}