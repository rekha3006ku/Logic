
import java.util.*;

class Number
{
    public int CalculateFactorial(int iNo)
    {
        int iCnt = 0 , iFact = 1;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
        {
        
            iFact = iFact * iCnt ;
            
        }

        return iFact ;             
        
    }
}// End of Number class

class program86
{
    public static void main(String Arr[])
    {
        int iValue = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        iRet = nobj.CalculateFactorial(iValue);
        
        System.out.println("factorial is "+iRet);

        sobj = null;
        nobj = null;

        System.gc();
        
    }
}