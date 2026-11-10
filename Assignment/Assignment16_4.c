/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 5
Output :
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
   *******J********
  |  1,1 1,2 1,3 1,4
  i  2,1 2,2 2,3 2,4
  |  3,1 3,2 3,3 3,4
  |  4,1 4,2 4,3 4,4
*/
#include<stdio.h>
#include<stdlib.h>

void pattern(int iRows, int iCol)
{
  if(iRows < 0 || iCol < 0)
  {
    iRows = -iRows;
    iCol = -iCol;
  }
    for (int i = iRows; i >= 1; i--)
    {
      for(int j = 1; j <= iCol; j++)
      {
        printf("%d ", i);
      }
      printf("\n");
    }
}
int main()
{
   int iRows = 0;
   int iCol = 0;
   int iRet = 0;

   printf("enter no of rows ");
   scanf("%d",&iRows);
   printf("enter no of coloums ");
   scanf("%d",&iCol);

  pattern(iRows, iCol);

  return EXIT_SUCCESS;
}