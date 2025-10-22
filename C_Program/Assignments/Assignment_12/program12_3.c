///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Sum_of_Factors
//  Description :   return sum of  factors
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Sum_of_Factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt =1 ; iCnt <= (iNo/2) ; iCnt++ )
    {
        if(iNo%iCnt == 0)
        {
            iSum = iSum +iCnt ;
        }
    }
    return iSum ;
}// time complexity is O(N/2)

//end of Print_Factors function

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

    iRet = Sum_of_Factors(iValue);
    printf(" Sum of factors : %d",iRet);

    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:12                Output:Sum of factors : 16
//  Input1:6                 Output:Sum of factors : 6
//  Input1:10                Output:Sum of factors : 8
//
///////////////////////////////////////////////////////////////////////////////