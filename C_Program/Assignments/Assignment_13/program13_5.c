///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Sum_Even_Number
//  Description :   sum of first n natural number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Sum_Even_Number(int iNo)
{
    int iCnt = 0;
    int iSum = 0 ;
    
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        if(iCnt%2 == 0)
        {
            iSum = iSum+iCnt ;
        }
        
    }

    return iSum ;
    
}// time complexity is O(N)

//end of Sum_Even_Number function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number :");
    scanf("%d ",&iValue);

    iRet = Sum_Even_Number(iValue);
    printf("Sum of even number : %d", iRet);

    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:5                 Output:Sum of even number :6 
//  Input1:9                 Output:Sum of even number :20   
//  Input1:10                Output:Sum of even number :30
//
///////////////////////////////////////////////////////////////////////////////