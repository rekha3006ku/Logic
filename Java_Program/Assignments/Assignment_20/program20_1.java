///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  SumEvenNumber
//  Description :   to calculate sum of all even number upto N
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    int SumEvenNumber(int iNo)
    {
        int iCnt = 0;
        int iEvensum = 0;
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iNo % 2 == 0)
            {
                iEvensum = iEvensum + iCnt ;
            }
        }
        return iEvensum ;
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program20_1
{
    public static void main(String A[])
    {
        int iRet = 0;

        Logic lobj = new Logic();
        iRet = lobj.SumEvenNumber(10);

        System.out.println("sum of even number :" +iRet);
    }
    
}//end of program20_1 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:10                Output:sum of even number : 55                                                 
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
