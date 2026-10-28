#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int BOOL;
#define True 1
#define False -1


 int isGraterThan(int iValue1 , int iValue2)
 {
    if(iValue1 > iValue2)
    {       
       return 1;
    }
    else if(iValue1 < iValue2)
    {
       return -1;
    }
    else
    {
        return 0;
    }
 
 }

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int bCheck = -1;

    printf("Enter 1st number to check Grater number :- ");
    scanf("%d",&iNo1);
    printf("Enter 2nd number to check Grater number :- ");
    scanf("%d",&iNo2);
    bCheck = isGraterThan(iNo1, iNo2);

    if(bCheck == 1)
        {
            printf("%d Grater than %d \n",iNo1, iNo2);
        }

    else if(bCheck == -1)
        {
            printf("%d Grater than %d \n",iNo2, iNo1);
        }
        else{
                printf("%d Is equal to %d",iNo2, iNo1);
        }
    return EXIT_SUCCESS;
}