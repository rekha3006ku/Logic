///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CalculatePower
//  Description :   to calculate the power of number
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CalculatePower(int iBase , int iExp)
    {
        int iCnt = 0;
        int iPower = 1;
        for(iCnt = 1 ; iCnt <= iExp ; iCnt++)
        {
            iPower = iPower * iBase ;
        }
        System.out.println("power of number :"+iPower);
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program19_5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CalculatePower(2 ,5);
    }
}//end of program19_5 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:2    Input2:5                Output:power of number : 32                                                 
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
