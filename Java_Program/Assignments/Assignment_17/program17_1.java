///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  SumOfDigits
//  Description :   to get sum of digits of number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    int SumOfDigits(int iNo)
    {
        int iDigit = 0 ;
        int iSum = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            iSum = iSum + iDigit ;
            
        }
        return iSum ;
        
    }
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////



class program17_1
{
    public static void main(String A[])
    {
        int iRet = 0;
        Logic lobj = new Logic();
        iRet = lobj.SumOfDigits(1234);

        System.out.println("Sum of of digits :" +iRet);
    }
}//end of program17_1 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:1234                  Output:Sum of of digits :10                                              
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
