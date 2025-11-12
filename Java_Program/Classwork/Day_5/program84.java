////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////////////////////////
//
//  Class Name :    Number
//  Function Name : CheckPerfect
//  Description :   it is used to check perfect number
//  Input :         Integer
//  output :        Boolean
//  Author :        Rekha Shankarlal Kumawat
//  Date :          06/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Number
{
    public boolean CheckPerfect(int iNo)
    {
        int iCnt = 0 , iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo ;
        }
                                                // change
        for(iCnt = 1 ; (iCnt <= (iNo / 2))  && (iSum < iNo ) ; iCnt++ )
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt ;
            }
        }

        return ( iSum == iNo);             
        
    }
}// End of Number class

///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////

class program84
{
    public static void main(String Arr[])
    {
        int iValue = 0;
        boolean bRet = false ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        bRet = nobj.CheckPerfect(iValue);
        
        if(bRet == true)
        {
            System.out.println(iValue+" is a perfect number");
        }
        else
        {
            System.out.println(iValue+" is not a perfect number");
        }

        sobj = null;
        nobj = null;

        System.gc();
        
    }
}//End of main class

///////////////////////////////////////////////////////////////////////////////
//
//  Input:6                  Output:6 is a perfect number
//  Input:8                  Output:8 is not a perfect number
//
//
///////////////////////////////////////////////////////////////////////////////

