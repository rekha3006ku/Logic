///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  PrintReverse
//  Description :   to print number from N to 1 in reverse order
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintReverse(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            System.out.println(iCnt);
        }
        
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program20_2
{
    public static void main(String A[])
    {

        Logic lobj = new Logic();
        lobj.PrintReverse(10);

    }
    
}//end of program20_2 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:10                Output:10  9  8  7  6  5  4  3  2  1                                                
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
