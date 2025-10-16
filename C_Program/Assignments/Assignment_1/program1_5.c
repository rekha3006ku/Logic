// accept onr number from user and print that number of * on screen
#include<stdio.h>

void Accept(int frequency)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= frequency; iCnt++)
    {
        printf("*\t");
    }

}
int main()
{
    int iValue = 0;

    printf("enter the frequency :");
    scanf("%d",&iValue);
    Accept(iValue);
    return 0;

}
///////////////////////////////////////////////////////////////////
// Input : 3                     output: * * *
// Input : 4                     output: * * * *
///////////////////////////////////////////////////////////////////
