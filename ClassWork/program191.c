/*
input : -4
Output :-4 -3 -2 -1 0 1  2  3  4
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt = 0;
    for(icnt = -iNo; icnt <= iNo; icnt++) //order of 0(2N);
    {
          printf("%d\t",icnt);
    }

    printf("\n");
}

int main()
{
  int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);
  return EXIT_SUCCESS;
}
