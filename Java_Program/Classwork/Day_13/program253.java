// Input : Data
//Output: _ata

import java.util.Scanner;
class  StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();

        Arr[0] = '-';

        return new String(Arr);    // change

    }
}

class program253
{
    public static void main(String A[])
    {
        String sRet = null ;

        Scanner scanobj = new Scanner(System.in);
        StringX strobj = new StringX();

        System.out.println("Enter String:");
        String sobj = scanobj.nextLine();

        sRet = strobj.Update(sobj);
        System.out.println("Updated String:"+sRet);
  
    }
}