/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 4
Output :
1  2  3  4
5  6  7  8
9 10 11 12
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
int icnt = 1;
    for (int i = 1; i <= iRows; i++)
    {
      
      for(int j = 1; j <= iCol ; j++)
        {
           printf("%d ", icnt);
           icnt++;
        }
        printf("\n");
    }
}
int main()
{
   int iRows = 0;
   int iCol = 0;
 
   printf("enter no of rows ");
   scanf("%d",&iRows);
   printf("enter no of coloums ");
   scanf("%d",&iCol);

  pattern(iRows, iCol);

  return EXIT_SUCCESS;
}