/*
Accept number of rows and number of columns from user and display below
pattern.
iRow = 5 iCol = 5
Output :
1 2 3 4 5
1 2     5
1   3   5
1     4 5
1 2 3 4 5
 **********J********
     1,1    1,2  1,3  1,4   1,5
 i
     2,1    2,2  2,3  2,4   2,5
     3,1    3,2  3,3  3,4   3,5
     4,1    4,2  4,3  4,4   4,5
     
     5,1    5,2  5,3  5,4   5,5
  */
#include <stdio.h>
#include <stdlib.h>

void pattern(int iRows, int icol)
{
  for(int i=1; i<=iRows; i++)
  {
    for(int j=1; j<=icol; j++)
    {
      if((i>=2 && i<=4) && (j>=2 && j<=4) && (i != j))
      {
        printf("   ");
      }
      else{
        printf("%d  ",j);
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