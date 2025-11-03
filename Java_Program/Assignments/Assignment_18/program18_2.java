///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  PrintEvenNumber
//  Description :   to print all even number upto n
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintEvenNumber(int iNo)
    {
        int iCnt = 0 ;
        for(iCnt = 1 ; iCnt < iNo ; iCnt++ )
        {
           if((iCnt % 2) == 0)
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


class program18_2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintEvenNumber(20);
    }
}//end of program18_2 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:20                  Output:2  4  6  8  10  12  14  16  18                                                   
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
