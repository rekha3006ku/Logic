///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Count_Factors
//  Description :   to Count the factors
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Count_Factors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt =1 ; iCnt <= (iNo/2) ; iCnt++ )
    {
        if(iNo%iCnt == 0)
        {
            iCount++;
        }
    }
    return iCount ;
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

    iRet = Count_Factors(iValue);
    printf("Total number of factors : %d",iRet);

    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:12                Output:Total number of factors :5
//  Input1:6                 Output:Total number of factors :3
//  Input1:10                Output:Total number of factors :3
//
///////////////////////////////////////////////////////////////////////////////