///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description :   difference between factor and  Non factors of a number
//  Input :         Integer
//  output :        Input
//  Author :        Rekha Shankarlal Kumawat
//  Date :          17/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void FactDiff(int iNo)
{
  int iCnt = 0 , iFactSum = 0, iNonFactSum = 0, iDiff = 0 ;

  if(iNo<0)
  {
    iNo = -iNo;
  }
   for(iCnt =1 ; iCnt<iNo; iCnt++)
   {
    if((iNo%iCnt)==0)
    {
        iFactSum = iFactSum+iCnt;
    }
    else
    {
      iNonFactSum = iNonFactSum +iCnt;
    }
   }

   iDiff = iFactSum - iNonFactSum;

   printf("Difference btween the factor and non factor : %d", iDiff);
   
}// End of FactDiff

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
  
    printf("enter the number :");
    scanf("%d",&iValue);

    FactDiff(iValue);
    
    return 0;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input:12                Output:-34
//  Input:13                Output:-76
//  Input:10                Output:-29
//
///////////////////////////////////////////////////////////////////////////////
