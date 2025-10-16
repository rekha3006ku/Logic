///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                           //for input output
#include<stdbool.h>                                         // for bool datatype

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPrime
//  Description :   it is used to check prime number
//  Input :         Integer
//  output :        bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          17/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0 ;
    bool bFlag = false;

    if(iNo <0)
    {
        iNo = -iNo ;
    }
    
    for(iCnt = 2 , bFlag =true; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            bFlag =false;
            break;                                                //optimization 
        }
    }
    return bFlag;
    
}// End of CheckPrime

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

    bRet = CheckPrime(iValue);
    
    if(bRet == true)
    {
        printf("%d is a prime number ", iValue);
    }
    else
    {
        printf("%d is not a prime number ", iValue);
    }
    

    return 0;
}//Enf of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input:12                Output:12 is Even Number
//  Input:11                Output:11 is Odd Number
//
////////////////////////////////////////////////////////////////////

/*NOTE:  time complexity for prime is O(N/2)
        time complexity for non prime is 1 or 
 */