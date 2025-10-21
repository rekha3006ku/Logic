
///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description :   difference between odd factorial and even factorial
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0 ;
    int OddFact = 1  ;
    int EvenFact = 1 ;

    int FactDiff  = 0;

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
        else 
        {
            OddFact = OddFact*iCnt;
        }
    }

    FactDiff = EvenFact - OddFact;
    return FactDiff ;
}// end of FactorialDiff function

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

    iRet = FactorialDiff(iValue);
    printf(" factorial Difference is %d",iRet);

    return 0 ;
}// end of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:5                Output:factorial Difference is  -7
//  Input1:-5               Output:factorial Difference is  -7  
//  Input1:10               Output:factorial Difference is  2895
//
///////////////////////////////////////////////////////////////////////////////