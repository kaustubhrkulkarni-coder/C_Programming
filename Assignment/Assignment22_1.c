/*
Accept number of rows and number of columns from user and display below
pattern.
Input : 5
Output : A B C D E
 
*/
#include <stdio.h>
#include <stdlib.h>

void pattern(int iNo)
{
  for(int i=1 , ch = 'A'; i<=iNo; i++ , ch++){
   
    printf("%c ",ch);
  
  }
}

int main()
{
  int iValue1 = 0;
  int ivalue2 = 0;

  printf("enter no ");
  scanf("%d", &iValue1);
 

  pattern(iValue1);

  return EXIT_SUCCESS;
}