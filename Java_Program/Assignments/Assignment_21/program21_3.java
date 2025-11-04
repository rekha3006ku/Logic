///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  Displayfactors
//  Description :   to display factors of a given number
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void Displayfactors(int iNo)
    {
        
        int iCnt = 0;
        for(iCnt = 1 ; iCnt < iNo ; iCnt++)
        {
            if(iNo % iCnt== 0)
            {
              System.out.println(iCnt);   
            }
        }  
        
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program21_3
{
    public static void main(String A[])
    {
        
        Logic lobj = new Logic();
        lobj.Displayfactors(12);

       
    }
    
}//end of program21_3 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:12                Output:1 2 3 4 6 
//                                                                  
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
