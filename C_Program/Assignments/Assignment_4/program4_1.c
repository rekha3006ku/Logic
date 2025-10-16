///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description :   Multiplication of factors
//  Input :         Integer
//  output :        Input
//  Author :        Rekha Shankarlal Kumawat
//  Date :          17/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
  int iCnt = 0 , iMult = 1;

  if(iNo<0)
  {
    iNo = -iNo;
  }
   for(iCnt =1 ; iCnt<= (iNo/2); iCnt++)
   {
    if((iNo%iCnt)==0)
    {
        iMult = iMult*iCnt;
    }
   }
   return iMult;
}// End of MultFact

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
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("multiplication of its factor is :%d",iRet);

    return 0;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input:12                Output:multiplication of its factor is 144
//  Input:13                Output:multiplication of its factor is :1
//  Input:10                Output:multiplication of its factor is :10
//
///////////////////////////////////////////////////////////////////////////////
