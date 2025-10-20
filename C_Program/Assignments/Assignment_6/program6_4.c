///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   Mutipication of Number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          19/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1 ,
             int iNo2 , 
             int iNo3)
{
        int Mult = 0;

        if(iNo1 != 0 , iNo2 != 0 , iNo3 != 0)
        {
            Mult = iNo1*iNo2*iNo3;
        }
        else if (iNo1 ==0 )
        {
            iNo1 =1;
            Mult =iNo2*iNo3; 
        }
        else if(iNo2 == 0)
        {
            Mult = iNo1*iNo3;
        }
        else if( iNo3 == 0)
        {
            Mult = iNo1*iNo2;
        }
        else
        {
            Mult =0;
        }
         
        return Mult ;
}// End of Multiply function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0 ;
    int iRet = 0 ;

    printf("Enter three number :");
    scanf("%d%d%d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2 , iValue3);

    printf("Multipilcation of number %d",iRet);

    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:5   Input2:4  Input3:7    Output:Multipilcation of number 140
//  Input1:5   Input2:0  Input3:7    Output:Multipilcation of number 35
//  Input1:0   Input2:0  Input3:0    Output:Multipilcation of number 0
//
///////////////////////////////////////////////////////////////////////////////