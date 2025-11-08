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
        System.out.println("Elements is Array are :");
        int iCnt = 0 ;
        for(iCnt = 0 ;iCnt < Arr.length ; iCnt++)
        {
             System.out.println(Arr[iCnt]);
        }
    }
}// End of ArrayX class

class program107
{
    public static void main (String A[])
    {
        ArrayX aobj1 = new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();

        ArrayX aobj2 = new ArrayX(7);
        aobj2.Accept();
        aobj2.Display();

    }
}