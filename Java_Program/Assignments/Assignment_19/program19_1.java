///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  CheckLeapYear
//  Description :   to check year is leap year or not
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          03/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CheckLeapYear(int iNo)
    {
        if(iNo % 4 == 0  || iNo % 400 == 0)
        {
            System.out.println(iNo+" is leap year");
        }
        else
        {
            System.out.println(iNo+" is not a leap year");
        }
            
    }
        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program19_1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckLeapYear(2024);
    }
}//end of program19_1 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:2024                  Output:2024 is a leap year                                                 
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
