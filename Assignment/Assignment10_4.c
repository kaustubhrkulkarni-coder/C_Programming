/*
    Write a program which accept temperature in Fahrenheit and convert it into
    celsius. (1 celsius = (Fahrenheit -32) * (5/9))
    Input : 10
    Output : -12.2222 (10 - 32) * (5/9)
*/

#include<stdio.h>
#include<stdlib.h>
double FhtoCs(float fNo)
{
    double dcels = (fNo - 32) * (5.0/9.0);
    return dcels;
}

int main()
{
    float fFahreTemp = 0.0f;
    double dRet = 0.0;
        printf("enter tempture in faherenheit :- ");
        scanf("%f", &fFahreTemp);
      
        dRet = FhtoCs(fFahreTemp);
        printf("%lf temp in celsius is",dRet);

    return EXIT_SUCCESS;
}