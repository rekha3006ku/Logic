///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayRev
//  Description :   to display range of number in reverse order
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iNo1 , int iNo2)
{
    int iCnt = 0;
    for(iCnt = iNo2 ; iCnt >= iNo1 ; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}//end of RangeDisplayRev function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1 , iValue2);

    return 0 ;
}// end of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:11     Input2:16          Output:16  15  14  13  12  11
//  Input1:21     Input2:26          Output:26  25  24  23  22  21
//  Input1:30     Input2:37          Output:37  36  35  34  33  32  31  30
//
///////////////////////////////////////////////////////////////////////////////