#include<stdio.h>
void Display(int iNo)
{
    int i = 0;
    while (i<iNo)
    {
        printf("*\n");
        i++;
    }
    
}
int main(){
int iValue = 0;

    printf("Enter number:- \t");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
