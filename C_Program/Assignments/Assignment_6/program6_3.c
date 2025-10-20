///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                       // for input output
#include<stdbool.h>                     //for  bool datatype

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description :   to check number are equal or not
//  Input :         Integer
//  output :        bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          19/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1 ,
              int iNo2
            )
{
    if(iNo1 == iNo2)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}// End of ChkEqual function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    bool bRet = false;

    printf("Enter two number:");
    scanf("%d%d",&iValue1,&iValue2);

    bRet =ChkEqual(iValue1,iValue2);
    
    if(bRet == true)
    {
        printf("Numbers are Equal");
    }
    else
    {
        printf("Number are not Equal");
    }
    return 0;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:12       Input2:23          Output:Numbers are not Equal
//  Input1:10       Input2:10          Output:Numbers are Equal
//  Input1:1        Input2: 3           Output:Numbers are not Equal
//
///////////////////////////////////////////////////////////////////////////////