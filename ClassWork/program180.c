// * * * * *
#include<stdio.h>
#include<stdlib.h>
void Pattern(int ino)
{int icnt = 0;
  for(icnt = 1; icnt<=ino; icnt++)
  {
    printf("*\t");
  }
  printf("\n");
}

int main()
{
  
  Pattern(7);

  return EXIT_SUCCESS;
}
