#include<stdio.h>

void DisplayCount(int iNo, int iCounter)
{
    for(int i = 1; i<=iCounter; i++)
        {
            printf("%d ",iNo );
        }
}

int main(){
    int iValue = 0;
    int iCnt = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);
    printf("Enter Counter \n");
    scanf("%d",&iCnt);
    printf("%d is Number is and %d is counter \n ", iValue,iCnt);

    DisplayCount(iValue, iCnt);

    return 0;
}