///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CountEvenOddRange
//  Description :   to count Even  and odd number present between 1 to N
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CountEvenOddRange(int iNo)
    {
        
        int iCnt = 0;
        int iEvenCount = 0;
        int iOddCount = 0;
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEvenCount++;
            }
            else
            {
                iOddCount++;
            }
        }   
            
        System.out.println("Even numbers are : " + iEvenCount);
        System.out.println("odd numbers are :" + iOddCount);
        
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program21_2
{
    public static void main(String A[])
    {
        
        Logic lobj = new Logic();
        lobj.CountEvenOddRange(50);

       
    }
    
}//end of program21_2 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:50                Output:even numbers are :25 
//                                  odd numbers are:  25                                              
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
