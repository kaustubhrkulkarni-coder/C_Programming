/*
Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input : 5
Output : 5000
*/

#include<stdio.h>
#include<stdlib.h>

float KMtoMeter(float iNo)
{
    float fmeter = iNo * 1000;
    return fmeter;
}

int main()
{
    float fKm = 0.0f;
    float fRet = 0.0f;
 
    printf("enter distance in to kilometer :- ");
    scanf("%f",&fKm);

    fRet = KMtoMeter(fKm);
    printf(" kilometer to meter conversion is %.2f",fRet);
    return EXIT_SUCCESS;
}