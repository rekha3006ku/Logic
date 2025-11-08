////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////////////////////////
//
//  Class Name :    Number
//  Function Name : CalculateFactorial
//  Description :   it is used to calculate factorial
//  Input :         Integer
//  output :        Long
//  Author :        Rekha Shankarlal Kumawat
//  Date :          06/10/2025
//
///////////////////////////////////////////////////////////////////////////////

class Number
{
    public long CalculateFactorial(int iNo)
    {
        int iCnt = 0 ;
        long lFact = 1;

        if(iNo < 0)
        {
            iNo = -iNo ;
        }

        iCnt = 1 ;
        while(iCnt <= iNo)          // Change
        {
            lFact = lFact*iCnt;
            iCnt++;
        }

        return lFact ;             
        
    }
}// End of Number class

///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////

class program89
{
    public static void main(String Arr[])
    {
        int iValue = 0 ;
        long lRet = 0 ;                                             // important

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        lRet = nobj.CalculateFactorial(iValue);
        
        System.out.println("factorial is: " +lRet);

        sobj = null;
        nobj = null;

        System.gc();
        
    }
}//End of main class

///////////////////////////////////////////////////////////////////////////////
//
//  Input:5                  Output:factorial is:120
//  Input:3                  Output:factorial is:6
//
///////////////////////////////////////////////////////////////////////////////
