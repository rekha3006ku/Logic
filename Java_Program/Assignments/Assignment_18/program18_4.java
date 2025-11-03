///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  SumEvenOddDigits
//  Description :   to print sum of all even number and odd number seprately
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void SumEvenOddDigits(int iNo)
    {
        int iEvenSum = 0;
        int iOddSum = 0 ;
        int iCnt = 0 ;
        for(iCnt = 1 ; iCnt < iNo ; iCnt++ )
        {
           if((iCnt % 2) == 0)
           {
                iEvenSum = iEvenSum + iCnt ;
           }
           else
           {
                iOddSum = iOddSum + iCnt ;

           }
        }

        System.out.println("Sum of Even digits is :" +iEvenSum);

        System.out.println("Sum of Odd digits is :" +iOddSum);
            
    }
        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program18_4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumEvenOddDigits(20);
    }
}//end of program18_4 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:20                  Output:Sum of Even digits is :90                                                
//                                    Sum of Odd digits is :100
//
//////////////////////////////////////////////////////////////////////////////                                                      
