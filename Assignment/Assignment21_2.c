/*
Accept number of rows and number of columns from user and display below
pattern.
iRow = 4 iCol = 3
Output :
1 2 3
1 2 3
1 2 3
1 2 3
 **********J********
     1,1  1,2  1,3 i
     2,1  2,2  2,3
     3,1  3,2  3,3
     4,1  4,2  4,3
     
     
  */
#include <stdio.h>
#include <stdlib.h>

void pattern(int iRows, int icol)
{
  for(int i=1; i<=iRows; i++)
  {
    for(int j=1; j<=icol; j++)    
    {
        printf("%d ", j);
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