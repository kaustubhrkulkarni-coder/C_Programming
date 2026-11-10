/*
Accept number of rows and number of columns from user and display below
pattern.
iRow = 5 iCol = 5
Output :
a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5
a b c d e
*/

#include <stdio.h>
#include <stdlib.h>
void pattern(int iRows, int iCol)
{
 
  for (int i = 1; i <= iRows; i++)
  {
    if(i % 2 !=0)
    {
      for(int j=1, ch = 'a'; j<=iCol; j++, ch++)
      {
       
          printf("%c ",ch);
        
      }
    }
    else if (i % 2 == 0)
    {
       for(int j=1, icnt = 1; j<=iCol; j++, icnt++)
      {
       
          printf("%d ",icnt);
      
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