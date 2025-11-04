///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  PrintDivisibleby2and3
//  Description :   to Count factors of a given number
//  Input :         Integer
//  output :        boolean
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean PrintDivisibleby2and3(int iNo)
    {
        if((iNo %2) == 0  && (iNo % 3)== 0)
        {
            return true ;
        }
        else{
            return false ;
        }
    }

        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program21_5
{
    public static void main(String A[])
    {
        boolean bRet = false ;
        Logic lobj = new Logic();
        bRet = lobj.PrintDivisibleby2and3(30);

        if(bRet == true)
        {
            System.out.println("number is Divisible by 2 and 3 ");
        }
        else
        {
             System.out.println("number is not Divisible by 2 and 3 ");
        }
       
    }
    
}//end of program21_5 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:30                Output:number is Divisible by 2 and 3 
//                                                                  
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
