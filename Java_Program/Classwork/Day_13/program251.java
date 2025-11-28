// Input : Data
//Output: capital letter count is :1

import java.util.Scanner;
class  StringX
{
    public int CountCapital(String str)
    {
        int iCnt = 0 ;
        int iCount = 0 ;
        char Arr[] = str.toCharArray();

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program251
{
    public static void main(String A[])
    {
        int iRet = 0 ;

        Scanner scanobj = new Scanner(System.in);
        StringX strobj = new StringX();

        System.out.println("Enter String:");
        String sobj = scanobj.nextLine();

        iRet = strobj.CountCapital(sobj);
        System.out.println("Capital letter count is :"+iRet);
  
    }
}