///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  PrintDigits
//  Description :   to print Digits of a number
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintDigits(int iNo)
    {
        int iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            System.out.println(iDigit);
        }
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program19_4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintDigits(9876);
    }
}//end of program19_4 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:9876                Output:6 7 8 9                                                 
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
