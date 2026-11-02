/*
input : 4
Output :-4 -3 -2 -1
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt = 0;
    for(icnt = -iNo; icnt < 0; icnt++){
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
