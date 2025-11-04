///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CheckDivisible
//  Description :   to check number is divisble by 5 or not
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 5) == 0 && (iNo %11) == 0)
        {
            System.out.println("Divisible by 5 and ll");
        }
        
        else
        {
            System.out.println("not Divisible by 5 and ll");
        }

        }
        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program19_3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckDivisible(55);
    }
}//end of program19_3 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:55                 Output:Divisible by 5 and ll                                                
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
