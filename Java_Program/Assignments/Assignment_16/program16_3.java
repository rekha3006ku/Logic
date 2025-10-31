///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  FindFactorial
//  Description :   to find factorial of number
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void FindFactorial(int iNo)
    {
        int iFact = 1 ;
        int iCnt = 0 ;
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
        {
            iFact = iFact*iCnt;

        }
        System.out.println("Factorial of number is " +iFact);
    }
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program16_3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.FindFactorial(5);
    }
}//end of program16_3 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:5                  Output:Factorial of number is 120                                                 
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
