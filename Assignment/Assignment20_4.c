/*
Accept number of rows and number of columns from user and display below
pattern.
iRow = 6 iCol = 6
Output :
* * * * * *
* # # # * *
* # # * $ *
* # * $ $ *
* * $ $ $ *
* * * * * *
 **********J********
  |  1,1    1,2  1,3  1,4  1,5    1,6
 i|
     2,1    2,2  2,3  2,4  2,5    2,6
  |  3,1    3,2  3,3  3,4  3,5    3,6
  |  4,1    4,2  4,3  4,4  4,5    4,6
     5,1    5,2  5,3  5,4  5,5    5,6
     
     6,1    6,2  6,3  6,4  6,5    6,6
  */
#include <stdio.h>
#include <stdlib.h>
void pattern(int iRows, int iCol)
{
  for (int i = 1; i <= iRows; i++)
  {
    for (int j = 1; j <= iCol; j++)
    {
      int iSum = i + j;
      
     if((i>=2 && i<=iRows - 2) && (j>=2 && j<=iRows - 2) && (iSum < iRows + 1))
      {
        printf("#  ");
      }
        else if ((i>=3 && i<=iRows - 1) && (j>=3 && j<=iRows - 1) && (iSum > iRows + 1) )
        {
            printf("$  ");
        }
    
      else{
        printf("*  ");
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