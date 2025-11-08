
import java.util.*;

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

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
        {
        
            lFact = lFact * iCnt ;
            
        }

        return lFact ;             
        
    }
}// End of Number class

class program88
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
        
        System.out.println("factorial is " +lRet);

        sobj = null;
        nobj = null;

        System.gc();
        
    }
}