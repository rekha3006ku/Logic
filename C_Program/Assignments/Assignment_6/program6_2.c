///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                       // for input output
#include<stdbool.h>                     // for bool Datatype

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description :   to find number greater then 100
//  Input :         Integer
//  output :        bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          19/10/2025
//
///////////////////////////////////////////////////////////////////////////////


bool ChkGreater(int iNo)
{
    if(iNo>100)
    {
        return true;
    }
    else
    {
        return false ;
    }
}// End of ChkGreater function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if(bRet == true)
    {
        printf("Number is Greater than 100");
    }
    else
    {
        printf("Number is less than or equal to 100");
    }
    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:100              Output:Number is less than or equal to 100 
//  Input1:101              Output:Number is Greater than 100
//  Input1:4354             Output:Number is Greater than 100
//
///////////////////////////////////////////////////////////////////////////////