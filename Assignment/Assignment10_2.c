/*
Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
Input : 5.3 9.78
Output : 51.834
*/

#include<stdio.h>
#include<stdlib.h>
float RectArea(float fwidth, float fheight)
{
    float fArearect = fwidth * fheight;
    return fArearect;
}
int main(){
    float fheight = 0.0f;
    float fwidth = 0.0f;
    float fRet = 0.0f;   

    printf("enter width :- ");
    scanf("%f",&fwidth);

     printf("enter height :- ");
    scanf("%f",&fheight);

    fRet = RectArea(fwidth , fheight);

    printf("%.2f is area of ratengel ", fRet);

    return EXIT_SUCCESS;
}