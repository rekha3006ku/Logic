///accept one number from user and print that number of even numbers on screen
#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt= 1 ; iCnt<=(2*iNo); iCnt++)
    {
        if((iCnt)%2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);
    PrintEven(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////
// input:3      output: 2 , 4 , 6
// input:7      output: 2, 4, 6, 8, 10, 12 ,14
////////////////////////////////////////////////////////////////////////
