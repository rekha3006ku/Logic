///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CalculateSum
//  Description :   to calculate sum of n natural number
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CalculateSum(int iNo)
    {
        int iSum = 0 ;
        int iCnt = 0 ;

        for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
        {
            iSum = iSum + iCnt ; 
        }

        System.out.println("Sum of n natural number is :" +iSum);
    }
}//end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////

class program16_1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CalculateSum(10);
    }
}//end of program16_1 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:10                  Output:Sum of n natural number is :55                                                       
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
