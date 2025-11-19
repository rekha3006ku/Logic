///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  FindLargestDigit
//  Description :   to find the largest digit in the number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    int FindLargestDigit(int iNo)
    {
        int iMax = 0;
        int iDigit = 0;

        while ((iNo != 0)) 
        {
            iDigit = iNo % 10 ;
            if(iDigit > iMax)
            {
                iMax = iDigit ;
            }

            iNo = iNo / 10 ;
        }
       return iMax;
        
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program20_4
{
    public static void main(String A[])
    {
        int iRet = 0;
        Logic lobj = new Logic();
        iRet = lobj.FindLargestDigit(83429);
        System.out.println("Maximum number is:"+iRet);
    }
    
}//end of program20_4 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:83429                Output:Maximum number is:9                                          
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
