///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                   // for Input Output

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountTwo
//  Description :   return frequency of 2 in digit
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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
        if(iDigit == 2)
        {
            iCount++;
        }
    
    }
    return iCount ;
    
}// end of CountTwo function

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

    iRet = CountTwo(iValue);
    printf("total number of two : %d", iRet);
    
    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:2395                  Output:total number of two :1                                                         
//  Input1:1018                  Output:total number of two :0                                                            
//  Input1:922432                Output:total number of two :3
//                                                         
///////////////////////////////////////////////////////////////////////////////