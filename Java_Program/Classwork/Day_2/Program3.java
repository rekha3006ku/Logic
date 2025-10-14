///////////////////////////////////////////////////////////////////////////////
//
//  required package
//
//////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
//
//  Class Name:     CheckEvenOdd
//  Function Name : EvenOdd
//  Description :   it os used to check even or odd
//  Input :         Integer
//  output :        boolean
//  Author :        Rekha Shankarlal Kumawat
//  Date :          10/10/2025
//
///////////////////////////////////////////////////////////////////////////////

class CheckEvenOdd
{
    int iNum  = 0;

    CheckEvenOdd(int iNo1)
    {
        this.iNum = iNo1;
    }

    public boolean evenodd()
    {
        if((iNum % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    }

}//End of CheckEvenOdd class

//////////////////////////////////////////////////////////////////////////////
//
//  main class for the application
//
//////////////////////////////////////////////////////////////////////////////

public class Program3 
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter the Number :");
        iValue = sobj.nextInt();

        CheckEvenOdd cobj = new CheckEvenOdd(iValue);
        bRet = cobj.evenodd();

        if(bRet == true)
        {
            System.out.println(iValue+" is Even Number");
        }
        else
        {
            System.out.println(iValue+" is Odd Number");
        }


    }    
}// End of Main class 

///////////////////////////////////////////////////////////////////////////////
//
//  Input:12                Output:12 is Even Number
//  Input:11                Output:11 is Odd Number
//
///////////////////////////////////////////////////////////////////////////////
