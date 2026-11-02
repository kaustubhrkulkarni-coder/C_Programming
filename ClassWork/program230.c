#include <stdio.h>
#include <stdlib.h>

int main()
{
  char Arr [100];

  Arr[0] = 'G';
  Arr[0] = 'a';
  Arr[0] = 'n';
  Arr[0] = 'e';
  Arr[0] = 's';
  Arr[0] = 'h';
  Arr[0] = '\0';

    printf("%s\n",Arr);
    printf("Size of array is %d\n",sizeof(Arr));


  return EXIT_SUCCESS;
}
