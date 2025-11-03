///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CheckPalindrom
//  Description :   to check number is palindrom or not
//  Input :         Integer
//  output :        boolean
//  Author :        Rekha Shankarlal Kumawat
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean CheckPalindrom(int iNo)
    {
        int iDigit = 0 ;
        int iRev = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            iRev = iRev*10 + iDigit ;
            
        }

        if(iNo == iRev )
        {
            return true;
           
        }
        else
        {
            return false ;
            
        }
        
    }
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////



class program17_2
{
    public static void main(String A[])
    {
        boolean bRet = false ;
        Logic lobj = new Logic();
        bRet = lobj.CheckPalindrom(121);

        if(bRet == true)
        {
             System.out.println("number is Palindrom");
        }
        else
        {
            System.out.println("number is not a palindrom");
        }
    }
}//end of program17_2 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:121                  Output:number is Palindrom                                              
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
