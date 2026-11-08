/*Write a program which accept three numbers and print its multiplication.
Input : 5 4 7
Output : 140
*/

#include<stdio.h>
#include<stdlib.h>
int Multiply(int ino1,int ino2, int ino3)
{
    int Ans = 0;
    
    if((ino1 == 0)&&(ino2 > 0)&&(ino3 > 0)){
        Ans = ino2 * ino3;
    }
    else if ((ino2 == 0)&&(ino1 > 0)&&(ino3 > 0))
    {
        Ans = ino1 * ino3;
    }
    else if ((ino3 == 0)&&(ino1 > 0)&&(ino2 > 0))
    {
        Ans = ino1 * ino2;
    }
    else if ((ino1 == 0) && (ino2 == 0))
    {
        Ans = ino3;
    }
    else if ((ino2 == 0) && (ino3 == 0))
    {
        Ans = ino1;
    }
    else if ((ino1 == 0) && (ino3 == 0))
    {
        Ans = ino2;
    }
    else if ((ino1 == 0) && (ino2 == 0) && (ino3 == 0))
    {
        Ans = 0;
    }
    else if((ino3 > 1)&&(ino1 > 0)&&(ino2 > 0)){
        Ans = ino1 * ino2 * ino3;
       
    }
    return Ans;
}
int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("enter 1st number ");
    scanf("%d",&iValue1);
    printf("enter 2nd number ");
    scanf("%d",&iValue2);
    printf("enter 3rd number ");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2, iValue3);
    printf("%d",iRet);


}