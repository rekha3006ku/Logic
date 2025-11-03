///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CheckSign
//  Description :   to print all Odd number upto n
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CheckSign(int iNo)
    {
        if(iNo < 0)
        {
            System.out.println("Number is negative");
        }
        else if (iNo > 0)
        {
            System.out.println("number is positive");   
        }
        else 
        {
            System.out.println("Number is zero");
        }

            
    }
        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program18_5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckSign(-8);
    }
}//end of program18_5 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:-8                  Output:Number is negative                                                 
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
