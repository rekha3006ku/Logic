//Input 10
//2 4 6 8 10

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 2 ;iCnt<= iNo ; iCnt+=2)
    {
        
       printf("%d\t",iCnt);
        
    }
    printf("\n");
}
//time complexity :O(N/2)

int main()
{
    int iValue = 0;

    printf("please enter the frequency: ");
    scanf("%d", &iValue);
    Display(iValue);

    return 0;
}