///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description :   to find the largest  number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          19/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1 ,
                 int iNo2 ,
                 int iNo3)
{
    if(iNo1 > iNo2  )
    {
        if(iNo1>iNo3)
        {
            return iNo1 ;
        }
    }
    else if(iNo2 > iNo3 )
    {
        return iNo2 ;
    }
    else 
    {
        return iNo3;
    }
}// end of FindLargest

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int ivalue1 = 0, iValue2 = 0 , iValue3 = 0;
    int iRet = 0;

    printf("Enter three Numbers :");
    scanf("%d%d%d",&ivalue1 , &iValue2,&iValue3);

    iRet = FindLargest(ivalue1 , iValue2, iValue3);

    printf("largest number %d",iRet);
    return 0;

}// end of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:12     Input2:23     Input3: 32     Output:largest number 32
//  Input1:10     Input2:30     Input3: 32     Output:largest number 32
//  Input1:1      Input2: 3      Input3: 2       Output:largest number 3
//
///////////////////////////////////////////////////////////////////////////////