////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////////////////////////////////////////
//
//  Class Name :    ArrayX
//  Function Name : Display
//  Description :   it is used to display Array
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          07/10/2025
//
///////////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public void Display(int Brr[])
    {
        int iCnt = 0;
        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }
}// End of ArrayX class

///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////


class program100
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;

        System.out.println("Enter size of Array :");
        iSize = sobj.nextInt();
        int iCount = 0;

        int Arr[] = new int[iSize];                                 //Dynamic memory allocation

        System.out.println("Enter the elements :");

        for(iCount = 0 ; iCount < Arr.length; iCount++)
        {
            Arr[iCount]= sobj.nextInt();
        }

        ArrayX aobj =new  ArrayX();
        aobj.Display(Arr);

        //important
        aobj = null ;
        Arr = null ;
        sobj = null ;

        System.gc();                                                //Memory Deallocation
    }
}//End of main class

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:3       Input2:10 ,20,30              Output:10 ,20,30
//  Input1:4       Input2:10 ,20,30              Output:10 ,20,30 ,40
//
///////////////////////////////////////////////////////////////////////////////
