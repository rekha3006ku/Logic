////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////////////////////////
//
//  Class Name :    Digit
//  Function Name : SumDigits
//  Description :   it is used to calculate Sum of digits
//  Input :         Integer
//  output :        Inteder
//  Author :        Rekha Shankarlal Kumawat
//  Date :          06/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Digit
{
    public int SumDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0 ;
        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            iSum = iSum + iDigit ;
            iNo = iNo / 10; 
        }
        return iSum ;
        
    } 
}// End of Number class

///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////

class program91
{
    public static void main(String Arr[])
    {
        int iValue = 0 ;
        int iRet = 0 ;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();
        iRet = dobj.SumDigits(iValue);

        System.out.println("Sum of Digits :"+ iRet);
        
        sobj = null;
        dobj = null;

        System.gc();
        
    }
}//End of main class

///////////////////////////////////////////////////////////////////////////////
//
//  Input:1234                  Output:Sum of Digits :10 
//  Input:3234                  Output:Sum of Digits :12
///////////////////////////////////////////////////////////////////////////////

