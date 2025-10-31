///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CountDigit
//  Description :   to count the digit
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CountDigit(int iNo)
    {
        int iDigit = 0 ;
        int iCount = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            iCount++ ;
            
        }
        System.out.println("total number of digits :" +iCount);
    }
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////



class program16_5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CountDigit(7864);
    }
}//end of program16_5 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:7864                  Output:total number of digits : 4                                              
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
