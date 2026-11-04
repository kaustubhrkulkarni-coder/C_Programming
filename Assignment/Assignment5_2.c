#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define true 1
#define false 0

bool CheckLeapYear(int iYearNo)
     {
          if((iYearNo % 4) == 0  && (iYearNo % 100) !=0)
          //if((iYear % 400) == 0)
               {
                    return true;
               }
               else
               {
                    return false;
               }
     }


int main()
{
    int iYear = 0;
    bool bYear = false;
    printf("enter year");
    scanf("%d", &iYear);

    bYear = CheckLeapYear(iYear);

    if(bYear == true)
     {
          printf("%d year is LEAP YEAR", iYear);
     }
     else
     {
          printf("%d year is not LEAP YEAR", iYear);
     }

}
