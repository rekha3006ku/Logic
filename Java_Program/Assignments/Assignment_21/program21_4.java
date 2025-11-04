///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  Countfactors
//  Description :   to Count factors of a given number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    int Countfactors(int iNo)
    {
        
        int iCnt = 0;
        int iCount = 0 ;
        for(iCnt = 1 ; iCnt < iNo ; iCnt++)
        {
            if(iNo % iCnt== 0)
            {
              iCount++;   
            }
        }  
        return iCount;
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program21_4
{
    public static void main(String A[])
    {
        int iRet = 0 ;
        Logic lobj = new Logic();
        iRet = lobj.Countfactors(12);
        System.out.println("number of factors are :"+iRet);
       
    }
    
}//end of program21_4 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:12                Output:5 
//                                                                  
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
