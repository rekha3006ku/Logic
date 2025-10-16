#include<stdio.h>

void Display(int Frequency)
{
    int iCnt = 0;
    iCnt = 1;

    while(iCnt <= Frequency)
    {
        printf("*\t");
        iCnt++;
    }
}
int main()
{
    int iValue =0 ;
    printf("enter number :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0; 
}