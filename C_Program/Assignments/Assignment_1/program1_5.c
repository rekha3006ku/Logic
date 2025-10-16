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