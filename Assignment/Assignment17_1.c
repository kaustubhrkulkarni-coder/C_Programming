/*
Accept number of rows and number of columns from user and display below
pattern.
iRow = 4 iCol = 4
Output :
1 2 3 4
5 6 7 8
9 1 2 3
4 5 6 7
*/

#include<stdio.h>
#include<stdlib.h>
void pattern(int iRows, int iCol)
{ int icnt = 1;
  for (int i = iRows; i>=1; i--)
  {
    for(int j = 1; j<= iCol; j++)
    {
      printf("%d ", icnt);
      if(icnt < 9)
      {
        icnt++;
      }
      else
      {
        icnt = 1;
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
    scanf("%d",&iValue1);
    printf("enter no of coloumns ");
    scanf("%d",&ivalue2);

    pattern(iValue1,ivalue2);

    return EXIT_SUCCESS;
}