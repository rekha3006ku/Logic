/*   
    Alogrithm
    START
        Accept first number input as iCount
        and Display Jay Ganesh on  screen 
        
    STOP
*/

///////////////////////////////////////////////////////////////////////////////
//
//  required package
//
//////////////////////////////////////////////////////////////////////////////
/// 
import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : it to Displat the String Jay Ganesh
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          10/10/2025
//
///////////////////////////////////////////////////////////////////////////////
/// 
class Marvellous
{
    public  void Display(int iFrequency)
    {
        int iCnt = 0;
        if(iFrequency < 0)
            {
                System.out.println("Invalid input");
            }
        for(iCnt = 1; iCnt <= iFrequency; iCnt++)
            {
                System.out.println("Jay Ganesh..");
            }
    }
}//End of Marvellous class

//////////////////////////////////////////////////////////////////////////////
//
//  main class for the application
//
//////////////////////////////////////////////////////////////////////////////
class Program2
{
    
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCount = 0;

        System.out.println("Enter the Frequency:");
        iCount = sobj.nextInt();

        Marvellous mobj = new Marvellous();
        mobj.Display(iCount);         

    }
}
///////////////////////////////////////////////////////////////////////////////
//
//  Input:2                 Output:Jay Ganesh
//                                 Jay Ganesh
//  Input:3                 Output: Jay Ganesh
//                                  Jay Ganesh
//                                  Jay Ganesh
//
///////////////////////////////////////////////////////////////////////////////