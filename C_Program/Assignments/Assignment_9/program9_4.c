
///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : OddFactorial
//  Description :   Odd factorial of number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0 ;
    int OddFact = 1  ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        if(iCnt%2 == 1)
        {
            OddFact = OddFact*iCnt;
        }
    }
    return OddFact ;
}// end of OddFactorial function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0 ;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd factorial of number is %d",iRet);

    return 0 ;
}// end of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:5                Output:Odd factorial of number is 15
//  Input1:-5               Output:Odd factorial of number is 15  
//  Input1:10               Output:Odd factorial of number is 945
//
///////////////////////////////////////////////////////////////////////////////