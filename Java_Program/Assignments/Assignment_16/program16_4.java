///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  ReverseNumber
//  Description :   to reverse the number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          31/10/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    int ReverseNumber(int iNo)
    {
        int iDigit = 0 ;
        int iRev = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            iRev = iRev*10 + iDigit ;
            
        }
        return iRev ;
        
    }
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////



class program16_4
{
    public static void main(String A[])
    {
        int iRet = 0;
        Logic lobj = new Logic();
        iRet = lobj.ReverseNumber(1234);

        System.out.println("Reverse of the number is:" +iRet);
    }
}//end of program16_4 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:1234                  Output:Reverse of the number is:4321                                              
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
