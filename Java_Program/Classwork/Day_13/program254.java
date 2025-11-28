// Input : Data
//Output: _ata

import java.util.Scanner;
class  StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();

        Arr[0] = '-';

        return new String(Arr);    

    }
}

class program254
{
    public static void main(String A[])
    {
        Scanner scanobj = new Scanner(System.in);
        StringX strobj = new StringX();

        System.out.println("Enter String:");
        String sobj = scanobj.nextLine();

        sobj = strobj.Update(sobj);          // change (not prefarable) as odd data is gone
        System.out.println("Updated String:"+sobj);
  
    }
}