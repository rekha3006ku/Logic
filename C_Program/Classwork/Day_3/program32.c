//1  * 2 * 3 * 4 * 5 *

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt = 1 ;iCnt<=5 ; iCnt++)
    {
        
       printf("1\t*\t");
       printf("2\t*\t");
       printf("3\t*\t");
       printf("4\t*\t");
       printf("5\t*\t");
       
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}