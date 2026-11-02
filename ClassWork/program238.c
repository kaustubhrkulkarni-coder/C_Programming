#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
int icount = 0;
char Arr[20] = "Jay Ganesh";

char *ptr = NULL;

 ptr = &(Arr[0]);
 while (*ptr != '\0')
  { // LOGIC

    icount++;
    ptr++;
  }
  printf("length of string is : %d\n",icount);
 return EXIT_SUCCESS;
}
