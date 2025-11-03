///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CheckPrime
//  Description :   to check prime
//  Input :         Integer
//  output :        boolean
//  Author :        Rekha Shankarlal Kumawat
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean CheckPrime(int iNo)
    {
        int iFrequency =0 ;
        int iCnt = 0 ;
        for(iCnt = 2 ; iCnt <= iNo ; iCnt++ )
        {
           iFrequency++; 
        }
        if(iNo % iCnt == 0)
            {
                return false ;
            }
            else
            {
                return true ;
            }
    }
        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program18_1
{
    public static void main(String A[])
    {
        boolean bRet = false ;
        Logic lobj = new Logic();
        bRet = lobj.CheckPrime(11);

        if(bRet == true)
        {
            System.out.println("11 is  not a prime number "  );
        }
        else
        {
            System.out.println("11 is a prime number "  );
        }
    }
}//end of program18_1 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:11                  Output:11 is not a prime number                                               
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
