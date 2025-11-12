////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////////////////////////
//
//  Class Name :    Number
//  Function Name : DisplayFactors
//  Description :   it is used to display factors
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          06/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Number
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1 ; iCnt <= (iNo / 2 ); iCnt++ )
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}// End of Number class

///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////

class program78
{
    public static void main(String Arr[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        nobj.DisplayFactors(iValue);
        
                                                        // Important
        
        sobj = null;
        nobj = null;

        System.gc();
        
    }
}//End of main class

///////////////////////////////////////////////////////////////////////////////
//
//  Input:12                   Output:1 2 3 4 6 
//  Input:11                   Output:1
//
///////////////////////////////////////////////////////////////////////////////

