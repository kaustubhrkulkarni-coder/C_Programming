#include <stdio.h>
typedef int BOOL;
    #define true 1
    #define false 0
  
    BOOL Check(BOOL iNo)
            {
                if (iNo % 5 == 0)
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

            int iValue = 0;
            BOOL bRet = false;

            printf("enter number \n");
            scanf("%d", &iValue);

            printf("you enter %d \n", iValue);

            bRet = Check(iValue);

            if (bRet == true)
            {
                printf("%d is divisable by 5 \n");
            }
            else
            {
            printf("%d is not divisable by 5 \n");
            }

            return 0;
        }
