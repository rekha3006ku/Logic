////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////////////////////////
//
//  Class Name :    Digit
//  Function Name : DiaplayDigit
//  Description :   it is used to Display numbers of a digit
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          06/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Digit
{
    public void DisplayDigit(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            System.out.println(iDigit);
            iNo = iNo / 10; 
        }
        
    } 
}// End of Number class

///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////

class program90
{
    public static void main(String Arr[])
    {
        int iValue = 0 ;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();
        dobj.DisplayDigit(iValue);
        
        sobj = null;
        dobj = null;

        System.gc();
        
    }
}//End of main class

///////////////////////////////////////////////////////////////////////////////
//
//  Input:1234                  Output:4 3 2 1 
//  Input:3234                  Output:4 3 2 3
//
///////////////////////////////////////////////////////////////////////////////

