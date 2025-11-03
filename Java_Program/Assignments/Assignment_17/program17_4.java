///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  FindMin
//  Description :   to find Minimum of three number
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void FindMin(int iNo1 , int iNo2 , int iNo3)
    {
       if(iNo1 < iNo2)
       {
         if(iNo3 < iNo1)
         {
          System.out.println("Minimum number is " +iNo3);
         }
         else
         {
          System.out.println("Minimum number is " +iNo1);
         }
       } 
       else
       {
         System.out.println("Minimum number is " +iNo2);
       }    
        
    }
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////



class program17_4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.FindMin(3 , 7, 2);
    }
}//end of program17_4 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:3     Input2:7   Input3:2      Output:Minimum number is 20                                              
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
