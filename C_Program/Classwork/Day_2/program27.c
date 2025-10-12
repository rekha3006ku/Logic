#include<stdio.h>

//Dynamic allocation
void Display(int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        printf("Invalid input");
    }
    for(iCnt= 1; iCnt <= iFrequency ; iCnt++ )
    {
        printf("Jay Ganesh..\n");
    }
}


int main()
{
    int iCount = 0;
    printf("Enter the frequency:");
    scanf("%d",&iCount);

    Display(iCount);
    return 0;
}
