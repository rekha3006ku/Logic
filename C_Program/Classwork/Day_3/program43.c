
#include<stdio.h>


int main()
{
   int iValue1 = 0 , iValue2 = 0;
   

   printf("Enter First Number:");
   scanf("%d",&iValue1);

   printf("Enter Second Number:");
   scanf("%d",&iValue2);

   

   if((iValue1 %iValue2 )==0)
    {
        printf("it is completely divisiable");
    }
    else
    {
        printf("it is not completely divisiable");
    }

    return 0;
}