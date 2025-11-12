///////////////////////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name :    ArrayX
//  Function Name : Display , EvenCount , Summation
//  Description :   it is used to display Array and count number of Even Number and summation
//  Input :         Integer ,Integer ,Integer
//  output :        void , Integer,Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          07/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public void Display(int Brr[])
    {
        int iCnt = 0;
        System.out.println("Elements of Array are :");
        
        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }

    public int CountEven(int Brr[])
    {
        int iCnt = 0 , iCount = 0; 
        for(iCnt = 0; iCnt < Brr.length ; iCnt++ )
        {
            if(Brr[iCnt] % 2 == 0)
            {
                iCount++ ;
            }
        }
        return iCount;
    }

    public int Summation(int Brr[])
    {
        int iCnt = 0 , iSum = 0; 
        for(iCnt = 0; iCnt < Brr.length ; iCnt++ )
        {
           
            iSum = iSum + Brr[iCnt] ;
        }
        return iSum;
    }
}// End of ArrayX class

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
////////////////////////////////////////////////////////////////////////////////////////////////////


class program102
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0 , iCnt = 0 , iRet = 0;

        System.out.println("Enter size of Array :");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];                             // Dynamic memory allocation

        System.out.println("Enter the elements :");

        for(iCnt = 0 ; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt]= sobj.nextInt();
        }

        ArrayX aobj =new  ArrayX();
        aobj.Display(Arr);
        
        iRet = aobj.CountEven(Arr);
        System.out.println("Even Elements are : "+iRet);

        iRet = aobj.Summation(Arr);
        System.out.println("Sum of Elements are : "+iRet);

        //important
        aobj = null ;                                             //memory deallocation
        Arr = null ;                                              //memory deallocation
        sobj = null ;                                             //memory deallocation

        System.gc();
    }
}//End of main class

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:3     Input2:10 ,20,30      Output1:10 ,20,30        Output2 :3    Output3: 60
//  Input1:4     Input2:10 ,20,30      Output1:10 ,20,30 ,40    output2 :3    Output3:100
//
////////////////////////////////////////////////////////////////////////////////////////////////////

