/*
Accept number of rows and number of columns from user and display below
pattern.
iRow = 4 iCol = 4
Output :
*
* *
* * *
* * * *
  **********J********
  |  1,1  --  --  --
 i|  2,1  2,2  --  --
  |  3,1  3,2  3,3  --
  |  4,1  4,2  4,3  4,4
*/

#include <stdio.h>
#include <stdlib.h>
void pattern(int iRows, int iCol)
{

for(int i=1; i<=iRows; i++)
      {
        for(int j=1; j<=iCol; j++)
        {   if(j<=i)
          {
              printf("* ");
        }
        else
        {
          printf(" ");
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