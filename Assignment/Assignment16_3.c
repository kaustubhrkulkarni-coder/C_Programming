/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 5
Output :
A A A A A
B B B B B
C C C C C
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
 
    for (int i = 1,ch = 'A'; i <= iRows; i++, ch++)
    {
      for(int j = 1; j <= iCol; j++)
      {
        printf("%c ", ch);
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