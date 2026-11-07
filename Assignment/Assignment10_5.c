/*
   Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
*/
#include<stdio.h>
#include<stdlib.h>


double SquareMeter(double iSqfeet)
{

    if(iSqfeet < 0)
    {
        iSqfeet = -iSqfeet;
    }
    double dSqmeter =  iSqfeet * 0.0929;
    return dSqmeter;
}

int main()
{
    int iSqfeet = 0;
    double dRet = 0.0;

    printf("enter square feet number to convert in to square meter :- ");
    scanf("%d",&iSqfeet);

    dRet = SquareMeter(iSqfeet);

    printf("square feet number to convert in to square meter is %lf", dRet);

    return EXIT_SUCCESS;
}
