/*
    START
        Accept number and store as no
        Divide no by 2
        if the remainder is 0
            then Display as Even
        otherwise
            Display as Odd
    STOP

*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0; 
}