///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  ProductofDigits
//  Description :   to find product of digits in a number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    int ProductofDigits(int iNo)
    {
        
        int iDigit = 0;
        int iProduct = 1;
        while( iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iProduct = iProduct * iDigit ;
        }    
            
        return iProduct ;
        
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program21_1
{
    public static void main(String A[])
    {
        int iRet = 0;
        Logic lobj = new Logic();
        iRet = lobj.ProductofDigits(234);

        System.out.println("product of number : " + iRet);
    }
    
}//end of program21_1 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:234                Output:product of a number : 24                                                
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
