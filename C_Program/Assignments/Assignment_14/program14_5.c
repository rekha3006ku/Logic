///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                   // for Input Output

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountTwo
//  Description :   return frequency of number less than 6 in digit
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit= iNo% 10 ;
        iNo = iNo / 10;
        if(iDigit < 6)
        {
            iCount++;
        }
    
    }
    return iCount ;
    
}// end of CountFour function

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

    iRet = CountFour(iValue);
    printf("total number of digit less than 6 : %d", iRet);
    
    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:2395                  Output:total number of digit less than 6 :3                                                         
//  Input1:1018                  Output:total number of digit less than 6 :3                                                            
//  Input1:9890                  Output:total number of digit less than 6 :1
//                                                         
///////////////////////////////////////////////////////////////////////////////