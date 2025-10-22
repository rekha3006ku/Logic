///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                   // for Input Output
#include<stdbool.h>                 // for Bool Datatype

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Description :   to check digit contains zero in it
//  Input :         Integer
//  output :        bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit= iNo% 10 ;
        iNo = iNo / 10;
        if(iDigit == 0)
        {
            return true;
        }
        else
        {
            return false ;
        }
    }
    
}// end of ChkZero function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0 ;
    bool bRet = false ;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet == true )
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    
    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:2395                  Output:There is no zero                                                        
//  Input1:1018                  Output:It contains zero                                                            
//  Input1:9000                  Output:It contains zero
//                                                         
///////////////////////////////////////////////////////////////////////////////