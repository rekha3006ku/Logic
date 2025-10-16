///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                   //for Input outpu
#include<stdbool.h>                 //For bool datatype

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description : it os used to check even or odd
//  Input :         Integer
//  output :        bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          10/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo1 , int iNo2)
{
    if((iNo1 %iNo2 )==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}// End of the CheckDivisible function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue1 = 0 , iValue2 = 0;
   bool bRet = false;

   printf("Enter First Number:");
   scanf("%d",&iValue1);

   printf("Enter Second Number:");
   scanf("%d",&iValue2);

   bRet = CheckDivisible(iValue1 , iValue1);

   if(bRet==true)
   {
    printf("It is completelt Divisible");

   }
   else
   {
    printf("It is  not completelt Divisible");
   }

    return 0;
}// End of main Function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:12       Input2:2        Output:It is completelt Divisible
//  Input1:11       Input2:5        Output:It is  not completelt Divisible
//
///////////////////////////////////////////////////////////////////////////////