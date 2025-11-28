// Input : Data
//Output: Small letter count is :3

import java.util.Scanner;
class  StringX
{
    public int CountSmall(String str)
    {
        int iCnt = 0 ;
        int iCount = 0 ;
        char Arr[] = str.toCharArray();

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program250
{
    public static void main(String A[])
    {
        int iRet = 0 ;

        Scanner scanobj = new Scanner(System.in);
        StringX strobj = new StringX();

        System.out.println("Enter String:");
        String sobj = scanobj.nextLine();

        iRet = strobj.CountSmall(sobj);
        System.out.println("Small letter count is :"+iRet);
  
    }
}