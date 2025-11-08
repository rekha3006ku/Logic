
import java.io.*;

class program76
{
    //not a good programming practice
    public static void main(String Arr[]) throws IOException
    {
        int iNo = 0;
        int iCnt = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number :");
        iNo = Integer.parseInt(bobj.readLine());

        for(iCnt = 1 ; iCnt <= (iNo /2 ); iCnt++)
        {
            if(iNo%iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}