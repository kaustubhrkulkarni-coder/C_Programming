/*
Accept number of rows and number of columns from user and display below
pattern.
iRow = 4 iCol = 4
Output :
2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9
*/

#include <stdio.h>
#include <stdlib.h>
void pattern(int iRows, int iCol)
{
 
  for (int i = 1; i <= iRows; i++)
  {
    if(i % 2 !=0)
    {
      for(int j=1, icnt = 1; j<=iCol, icnt <= 10 ; j++, icnt++)
      {
        if(icnt % 2 == 0 )
        {
          printf("%d ",icnt);
        }
      }
    }
    else if (i % 2 == 0)
    {
       for(int j=1, icnt = 1; j<=iCol,icnt <= 10; j++, icnt++)
      {
        if(icnt % 2 != 0)
        {
          printf("%d ",icnt);
        }
      }
    }
    

    printf("\n");
  }
}

int main()
{
  int iValue1 = 0;
  int ivalue2 = 0;

  printf("enter no of rows ");
  scanf("%d", &iValue1);
  printf("enter no of coloumns ");
  scanf("%d", &ivalue2);

  pattern(iValue1, ivalue2);

  return EXIT_SUCCESS;
}