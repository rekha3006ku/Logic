///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  PrintOddNumber
//  Description :   to print all Odd number upto n
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintOddNumber(int iNo)
    {
        int iCnt = 0 ;
        for(iCnt = 1 ; iCnt < iNo ; iCnt++ )
        {
           if((iCnt % 2) == 1)
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


class program18_3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintOddNumber(20);
    }
}//end of program18_3 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:20                  Output:1  3  5  7  9  11  13  15  17  19                                                 
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
