///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSumEven
//  Description :   to display sum of Even number of range of number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iNo1 , int iNo2)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo1 < 0 || iNo2 <0 || iNo1 > iNo2)
    {
        printf("Invalid Range \n");
    }
    else
    {
        for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum+iCnt;
            }
            
        
        }
    }
    
    return iSum;
}//end of RangeSumEven function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet =0 ;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1 , iValue2);
    printf("Addition %d ", iRet);

    return 0 ;
}// end of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:23     Input2:30          Output:Addition 108
//  Input1:10     Input2:18          Output:Addition 27
//  Input1:-10    Input2:0           Output:Invalid Range
//  Input1:90     Input2:18          Output:Invalid Range
//
///////////////////////////////////////////////////////////////////////////////