#include<stdio.h>

void Display(int *ptr)      // Issue just give output as 10 ,10 ,10 ,10
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < 4; iCnt++)
    {
        printf("%d ", *ptr);
    }
}

int main()
{
    int Arr[] ={10 , 20 , 30 , 40};

    Display(Arr);               //Display(100); call  by address

    return 0 ;
}