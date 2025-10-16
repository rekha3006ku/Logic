//1 2 3 4 5

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt = 1 ;iCnt<=5 ; iCnt++)
    {
        printf("*\t");        // static loop as there no change in pattern 
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}