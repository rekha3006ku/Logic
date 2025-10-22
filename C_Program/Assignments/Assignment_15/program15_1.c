///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                   // for Input Output

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description :   count even number of digits
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
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
        if(iDigit % 2 == 0)
        {
            iCount++;
        }
    
    }
    return iCount ;
    
}// end of CountEven function

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

    iRet = CountEven(iValue);
    printf("Even digit : %d", iRet);
    
    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:2395                  Output:Even digit :1                                                         
//  Input1:1018                  Output:Even digit :2                                                            
//  Input1:8642                  Output:Even digit :4
//                                                         
///////////////////////////////////////////////////////////////////////////////