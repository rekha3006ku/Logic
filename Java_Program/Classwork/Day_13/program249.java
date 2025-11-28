// Input : Data
//Output: Occurance count is : 2

import java.util.Scanner;
class  StringX
{
    public int CountOccurence(String str)
    {
        int iCnt = 0 ;
        int iCount = 0 ;
        char Arr[] = str.toCharArray();

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] == 'a' )
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program249
{
    public static void main(String A[])
    {
        int iRet = 0 ;

        Scanner scanobj = new Scanner(System.in);
        StringX strobj = new StringX();

        System.out.println("Enter String:");
        String sobj = scanobj.nextLine();

        iRet = strobj.CountOccurence(sobj);
        System.out.println("Occurance count is :"+iRet);
  
    }
}