///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                   // for Input Output

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountDiff
//  Description :   difference between summation of even digit and odd digit
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0 ;
    int iDiff =0 ;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit= iNo% 10 ;
        iNo = iNo / 10;
        if(iDigit %2 ==0)
        {
           iEvenSum = iEvenSum + iDigit ;
        }
        else
        {
            iOddSum = iOddSum + iDigit ;
        }
    
    }

    iDiff = iEvenSum - iOddSum ;
    return iDiff ;
    
}// end of CountDiff function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0 ;
    int iRet =  0 ;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Differenc : %d", iRet);
    
    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:2395                  Output:Differenc :-15                                                         
//  Input1:1018                  Output:Differenc :6                                                         
//  Input1:8440                  Output:Differenc :16
//                                                         
///////////////////////////////////////////////////////////////////////////////