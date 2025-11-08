// OOP Design
import java.util.*;
class ArrayX
{
    private int Arr[];
    private int iSize = 0;

    public ArrayX(int iNo)
    {
        System.out.println("Inside Constructor");
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
        System.out.println("Elements os Array are :");
        int iCnt = 0 ;
        for(iCnt = 0 ;iCnt < Arr.length ; iCnt++)
        {
             System.out.println(Arr[iCnt]);
        }
    }
}

class program106
{
    public static void main (String A[])
    {
        ArrayX aobj1 = new ArrayX(5);
        System.out.println(aobj1.iSize);        //Error

        // Bad code (need of Access specifier)
        aobj1.iSize = 11;                       // Error
        aobj1.Arr = null;                       //Error

        ArrayX aobj2 = new ArrayX(7);
        System.out.println(aobj2.iSize);        //Error
        
    }
}