///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CheckPerfect
//  Description :   to check number is perfect number or not
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    int CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1 ; iCnt < iNo ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum +iCnt ;
            }
        }
        return iSum ;
        
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program20_3
{
    public static void main(String A[])
    {
        int iRet = 0;
        Logic lobj = new Logic();
        iRet = lobj.CheckPerfect(6);


        if(iRet == 6)
        {
            System.out.println("number is perfect number");
        }
        else
        {
            System.out.println("number  is not a perfect number");
        }
    }
    
}//end of program20_3 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:6                Output:number is a perfect number                                                
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
