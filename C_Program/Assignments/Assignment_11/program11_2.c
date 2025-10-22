///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Description :   to display even number in range of number
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iNo1 , int iNo2)
{
    int iCnt = 0;
    for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
}//end of RangeDisplayEven function

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

    RangeDisplayEven(iValue1 , iValue2);

    return 0 ;
}// end of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:11     Input2:16          Output:12  14  16
//  Input1:21     Input2:26          Output:22  24  26 
//  Input1:30     Input2:37          Output:30  32  34  36 
//
///////////////////////////////////////////////////////////////////////////////