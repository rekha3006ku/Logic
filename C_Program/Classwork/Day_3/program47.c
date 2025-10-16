//factors of 6 :1, 2, 3
#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt )== 0)
        {
           printf("%d\t", iCnt);
        } 

    }
   
    
}
int main()
{
   int iValue = 0;

   printf("Enter  Number:");
   scanf("%d",&iValue);
   DisplayFactors(iValue);

    return 0;
}