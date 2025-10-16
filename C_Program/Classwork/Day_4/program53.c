///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountFactorsNonFactors
//  Description :   it is used to check number of Dactors and Non factors
//  Input :         Integer
//  output :        bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          17/10/2025
///////////////////////////////////////////////////////////////////////////////
void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0 , iFrequency1 = 0 , iFrequency2 = 0;

    if(iNo <0)
    {
        iNo = -iNo ;
    }
    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iFrequency1++;
            
        }
        else
        {
            iFrequency2++;
        }
    }
    printf("Number of factors are: %d\n", iFrequency1);
    printf("Number of non factors are: %d\n", iFrequency2);
    
}// End of CountFactorsNonFactors function 

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter the number:");
    scanf("%d",&iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}//Enf of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input:12                Output:Number of factors are:4
//                                 Number of Non factors are:                  
//  Input:11                Output:Number of factors are:1
//                                 Number of Non factors are:9
//
///////////////////////////////////////////////////////////////////////////////