///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  FindMax
//  Description :   to find maximum of two number
//  Input :         Integer
//  output :        boolean
//  Author :        Rekha Shankarlal Kumawat
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean FindMax(int iNo1 , int iNo2)
    {
       if(iNo1 > iNo2)
       {
         return true ;
         
       } 
       else
       { 
         return false ;
         
       }    
        
    }
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////



class program17_3
{
    public static void main(String A[])
    {
        boolean bRet = false;
        Logic lobj = new Logic();
        bRet = lobj.FindMax(20 ,15);

        if(bRet == true)
        {
            System.out.println("maximum number is 20 ");

        }
        else
        {
            System.out.println("maximum number is 15 ");
        }
    }
}//end of program17_3 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:20     Input2:15           Output:maximum number is 20                                              
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
