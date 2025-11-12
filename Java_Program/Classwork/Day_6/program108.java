///////////////////////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name :    ArrayX
//  Function Name : Accept , Display , Average
//  Description :   it is used to Accept Array , Display Array , and return Average of Array number
//  Input :         Integer ,Integer ,Integer
//  output :        void , Void ,Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          07/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

class ArrayX
{
    private int Arr[];
    private int iSize = 0;

    public ArrayX(int iNo)
    {
        iSize = iNo ;
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        System.out.println("Enter the elements of Array:");

        for(iCnt = 0 ;iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

    }

    public void Display()
    {
        System.out.println("Elements is Array are :");
        int iCnt = 0 ;
        for(iCnt = 0 ;iCnt < Arr.length ; iCnt++)
        {
             System.out.println(Arr[iCnt]);
        }
    }

    public float Average()
    {
        int iCnt = 0 , iSum = 0;
        for(iCnt = 0 ;iCnt < Arr.length ; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return(iSum/iSize);

    }
}// End of ArrayX class

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
////////////////////////////////////////////////////////////////////////////////////////////////////


class program108
{
    public static void main (String A[])
    {
        float fRet = 0;
        ArrayX aobj1 = new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();

        fRet = aobj1.Average();
        System.out.println("Average is :" + fRet);

    }
}//End of main class

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:5     Input2:10,20,30,40,50     Output1:10,20,30,40,50       Output2 :Average is:30   
//
////////////////////////////////////////////////////////////////////////////////////////////////////

