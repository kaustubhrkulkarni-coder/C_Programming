// * * * * *
#include<stdio.h>
#include<stdlib.h>
void Pattern(int ino)
{int icnt = 0;
  for(icnt = 1; icnt<=ino; icnt++)
  {
    printf("$\t");
  }
  printf("\n");
}

int main()
{
  int iValue =0;
  printf("Enter the frequency");
  scanf("%d",&iValue);
  Pattern(iValue);
  return EXIT_SUCCESS;
}
