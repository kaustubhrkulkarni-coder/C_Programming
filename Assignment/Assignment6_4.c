// valid trangel

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
        if((iSide1 <=0 ) || (iSide2 <=0) || (iSide3 <=0)){
        printf("you enter 0 or negative value \n");
        
    }
    else if (
        (((iSide1 + iSide2) > iSide3)) &&
        (((iSide1 + iSide3) > iSide2)) &&
        (((iSide2 + iSide3) > iSide1))
       
    )
    {
        printf("this is valid trangel \n");
    }
    else
    {
        printf("this is not valid trangel\n");
    }
}

int main(){

    int iSide1 = 0;
    int iSide2 = 0;
    int iSide3 = 0;

    printf("enter first side \n");
    scanf("%d",&iSide1);
    printf("enter Second side \n");
    scanf("%d",&iSide2);
    printf("enter Thired side \n");
    scanf("%d",&iSide3);

    printf("you enter %d %d %d these 3 sides of Trangle \n",iSide1,iSide2,iSide3);

        CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}