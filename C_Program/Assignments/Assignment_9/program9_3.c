
///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description :   Even factorial of number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0 ;
    int EvenFact = 1  ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        if(iCnt%2 == 0)
        {
            EvenFact = EvenFact*iCnt;
        }
    }
    return EvenFact ;
}// end of EvenFactorial function

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

    iRet = EvenFactorial(iValue);
    printf("Even factorial of number is %d",iRet);

    return 0 ;
}// end of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:5                Output:Even factorial of number is 8
//  Input1:-5               Output:Even factorial of number is 8   
//  Input1:10               Output:Even factorial of number is 3840
//
///////////////////////////////////////////////////////////////////////////////