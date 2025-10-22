///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                       // for Input Output
#include<stdbool.h>                     // for Bool datatype

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : is_Divisible_by_five
//  Description :   return sum of even  factors
//  Input :         Integer
//  output :        bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool is_Divisible_by_five(int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false ;
    }
}// time complexity is O(1)

//end of Print_Factors function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter the number :");
    scanf("%d ",&iValue);

    bRet = is_Divisible_by_five(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 5 ", iValue);

    }
    else
    {
        printf("%d is not Divisible by 5 ", iValue);
    }

    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:12                Output: 12 is not Divisible by 5
//  Input1:6                 Output:6 not Divisible by 5 
//  Input1:10                Output:10 is Divisible by 5 
//
///////////////////////////////////////////////////////////////////////////////