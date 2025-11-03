///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  PrintTable
//  Description :   to print table
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintTable(int iNo)
    {
        int iTable = 0 ;
        int iCnt = 0 ;
        for(iCnt = 1 ; iCnt <= 10 ; iCnt++ )
        {
            iTable = iNo * iCnt ;
            System.out.println(iTable  );
    }
        }
        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program17_5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintTable(5);
    }
}//end of program17_5 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:5                  Output:5  10  15  20  25  30  35  40  45  50                                                 
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
