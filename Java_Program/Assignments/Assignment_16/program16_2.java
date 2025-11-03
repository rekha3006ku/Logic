///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CheckEvenOdd
//  Description :   to check number is Even or odd
//  Input :         Integer
//  output :        boolean
//  Author :        Rekha Shankarlal Kumawat
//  Date :          31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean CheckEvenOdd(int iNo)
    {
        if(iNo %2 == 0)
        {
            return true ;
        }
        else
        {
            return false;
        }
    }
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program16_2
{
    public static void main(String A[])
    {
        boolean bRet = false;
        Logic lobj = new Logic();
        bRet = lobj.CheckEvenOdd(7);
        if(bRet == true)
        {
            System.out.println(" 7 is Even number");
        }
        else
        {
            System.out.println(" 7 is Odd number");
        }
    }
}//end of program16_2 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:7                  Output:7 is Odd number                                                  
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
