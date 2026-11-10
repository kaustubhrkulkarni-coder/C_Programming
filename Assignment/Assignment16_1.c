/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :   *******J********
A B C D  |  1,1 1,2 1,3 1,4
A B C D  i  2,1 2,2 2,3 2,4
A B C D  |  3,1 3,2 3,3 3,4
A B C D  |  4,1 4,2 4,3 4,4
*/

#include<stdio.h>
#include<stdlib.h>
void pattern(int iRows, int iCol)
{
    for(int i = 1; i<=iRows; i++)
    {
        for(int j = 1, ch = 'A'; j<=iCol; j++,ch++)
        {
            printf("%c ", ch);            
        }
        printf("\n");
    }
}

int main()
{ int iRows = 0;
  int iCol = 0;

  printf("enter no of rows ");
  scanf("%d",&iRows);
  printf("enter no of coloums ");
  scanf("%d",&iCol);

    pattern(iRows,iCol);


  return EXIT_SUCCESS;

}