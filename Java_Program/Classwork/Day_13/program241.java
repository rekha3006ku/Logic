// Input : Rekha 
//Output:length of string 5

import java.util.Scanner;

class program241
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String:");
        String str = sobj.nextLine();

        System.out.println(("Input is :" +str));
        System.out.println("Length of String is :"+str.length());
    }
}