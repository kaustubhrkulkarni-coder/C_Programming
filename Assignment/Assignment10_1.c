/*
Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
*/

#include<stdio.h>
#include<stdlib.h>

double dispalyRedius(float fradius)
{
    double darea = 0.0;
    darea = 3.14 * (fradius * fradius);
    return darea;
}

int main()
{
    float fRadius = 0.0f;
    double dRet = 0.0;
    printf("enter radius of circle ");
    scanf("%f", &fRadius);

    dRet = dispalyRedius(fRadius);
    printf("Area of circle %lf", dRet);

    return EXIT_SUCCESS;
}