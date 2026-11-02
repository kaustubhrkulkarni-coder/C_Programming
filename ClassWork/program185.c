/*
input : 4
Output : 1*2*3*4
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt<=iNo; icnt ++){
          printf("%d\t*\t",icnt);
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
