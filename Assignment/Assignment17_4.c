/*
Accept number of rows and number of columns from user and display below
pattern.
iRow = 5 iCol = 5
Output :
1 2 3 4 5
-1 -2 -3 -4 -5
1 2 3 4 5
-1 -2 -3 -4 -5
1 2 3 4 5
*/

#include <stdio.h>
#include <stdlib.h>
void pattern(int iRows, int iCol)
{
 
  for (int i = 1; i <= iRows; i++)
  {
    if(i % 2 !=0)
    {
      for(int j=1; j<=iCol; j++)
      {
       
          printf("%d ",j);
        
      }
    }
    else if (i % 2 == 0)
    {
       for(int j = -1; j>=-(iCol); j--)
      {
       
          printf("%d ",j);
      
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