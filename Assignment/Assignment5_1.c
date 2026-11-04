#include<stdio.h>
#include<stdlib.h>

int grtestOfThree(int iNo1,int iNo2,int iNo3)
{
     if(iNo1 >= iNo2 && iNo1 >= iNo3 )
    {
        return 1;
    }
    else if (iNo2 >= iNo1 && iNo2 >= iNo3)
    {
        return -1;
    }
    else if (iNo3 >= iNo1 && iNo3 >= iNo2)
    {
       return 0;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0,iValue3 = 0;
    int iAns = 0;

    printf("Enter 3 number \n");
    scanf("%d" "%d" "%d" , &iValue1, &iValue2,&iValue3);
    printf("you enter %d %d %d \n",iValue1,iValue2,iValue3);



    iAns = grtestOfThree(iValue1, iValue2, iValue3);

    if(iAns == 1)
    {
        printf("%d is grater than other 2 number",iValue1);
    }
    else if (iAns = -1)
    {
        printf("%d is grater than other 2 number",iValue2);
    }
    else if (0)
    {
        printf("%d is grater than other 2 number",iValue3);
    }

    EXIT_SUCCESS;
}