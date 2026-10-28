#include<stdio.h>
#include<stdlib.h>

 int CheckVotingEligibility(int iValue)
 {
    if(iValue >= 18 )
    {
       return 1;
    }
    else if(iValue >= 0 && iValue < 18)
    {
       return -1;
    }
    else if(iValue < 0)
    {
        return 0;
    }
 
 }

int main()
{
    int iNo = 0;
    int bCheckAge = -1;

    printf("Enter Age :- ");
    scanf("%d",&iNo);
 
    bCheckAge = CheckVotingEligibility(iNo);

    if(bCheckAge == 1)
    {
        printf("you can vote");
    }
    else if(bCheckAge == -1)
    {
        printf("you can not vote");
    }
    else{
        printf("enter valid number");
    }

    return EXIT_SUCCESS;
}