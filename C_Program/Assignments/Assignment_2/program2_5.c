///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                   //for input output
#include<stdbool.h>                                 //for bool datatype

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Description :   it is used to check even or odd
//  Input :         Integer
//  output :        bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          16/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
 
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}// End of ChkEven

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number",iValue);
    }
    else
    {
        printf("%d is Odd Number",iValue);
    }

    return 0; 
}//Enf of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input:12                Output:12 is Even Number
//  Input:11                Output:11 is Odd Number
//
///////////////////////////////////////////////////////////////////////////////