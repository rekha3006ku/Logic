///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  FindSmallestDigits
//  Description :   to find the Smallest digit in the number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    int FindSmallestDigits(int iNo)
    {
        
        int iDigit = 0;
        int iMin = 0;
        iMin = iNo % 10 ;
        while ((iNo != 0)) 
        {
            iDigit = iNo % 10 ;
            if(iDigit < iMin)
            {
                iMin = iDigit ;
            }

            iNo = iNo / 10 ;
        }
       return iMin;
        
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program20_5
{
    public static void main(String A[])
    {
        int iRet = 0;
        Logic lobj = new Logic();
        iRet = lobj.FindSmallestDigits(83429);
        System.out.println("Minimum number is:"+iRet);
    }
    
}//end of program20_5 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:83429                Output:Minimum number is:2                                       
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
