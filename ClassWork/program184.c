/*
input : 6
Output : 1  2  3  4  5  6
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt<=iNo; icnt ++){
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
