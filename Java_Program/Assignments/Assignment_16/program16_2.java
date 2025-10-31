///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CheckEvenOdd
//  Description :   to check number is Even or odd
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CheckEvenOdd(int iNo)
    {
        if(iNo %2 == 0)
        {
            System.out.println(iNo + " is Even number");
        }
        else
        {
            System.out.println(iNo + " is Odd number");
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
        Logic lobj = new Logic();
        lobj.CheckEvenOdd(7);
    }
}//end of program16_2 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:7                  Output:7 is Odd number                                                  
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
