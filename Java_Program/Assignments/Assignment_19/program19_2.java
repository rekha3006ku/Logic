///////////////////////////////////////////////////////////////////////////////
//
//  class Name :    Logic
//  function name:  DisplayGrade
//  Description :   to display grade of a student based on marks
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void DisplayGrade(int iNo)
    {
        if(iNo <= 100 && iNo >= 91)
        {
            System.out.println("Grade A+");
        }
        else if(iNo <= 90  && iNo >= 81)
        {
            System.out.println("Grade A");
        }
        else if(iNo <= 80  && iNo >= 71)
        {
            System.out.println("Grade B");
        }
        else if(iNo <= 70  && iNo >= 61)
        {
            System.out.println("Grade C");
        }
        else if(iNo <= 60   && iNo >= 51)
        {
            System.out.println("Grade D");
        }
        else
        {
            System.out.println("Fail");
        }

        }
        
}// end of Logic class

///////////////////////////////////////////////////////////////////////////////
//
// Main class with entery point function
//
///////////////////////////////////////////////////////////////////////////////


class program19_2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.DisplayGrade(82);
    }
}//end of program19_2 class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:82                  Output:Grade A                                                 
//  
//
//////////////////////////////////////////////////////////////////////////////                                                      
