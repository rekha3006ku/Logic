/*   
    Alogrithm
    START
        Accept first number input as no1
        Accept Sceond number input as no2
        if the input is negative then convert it into positive
        perform addition of no1,no2
        display the addition on screen
        
    STOP
*/

///////////////////////////////////////////////////////////////////////////////
//
//  required package
//
//////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////
//
//  class Name:     AdditionTwoNumber
//  Function Name:  Addition
//  Description:    It is used to perform addition
//  Input:          Float, Float
//  Output:         Float
//  Author:         Rekha Shankarlal Kumawat
//  Date:           09/10/2025
//
//////////////////////////////////////////////////////////////////////////////
class AdditionTwoNumber
{
    float fNum1 = 0.0f, fNum2 = 0.0f ;
    float fSum =0.0f ;                                                          //to store the result

    AdditionTwoNumber(
                        float fNo1 ,                                            //First input
                        float fNo2)                                             //Second input
    {
        this.fNum1 = fNo1;          
        this.fNum2 = fNo2;          
    }

    public float Addition()
    {
        if(fNum1 < 0.0f)                                                        //updator
            {
                fNum1= -fNum1;           
            }
    
        if(fNum2 < 0.0f)                                                        //updator
            {
                fNum2 = - fNum2;           
            }

        fSum = fNum1 + fNum2;                                                  //business logic

        return fSum;
        
    }
}   //End of AdditonTwoNumber class

//////////////////////////////////////////////////////////////////////////////
//
//  main class for the application
//
//////////////////////////////////////////////////////////////////////////////

class Program1
{
    public static  void main(String Arr[])
    {
        
        Scanner sobj =  new Scanner(System.in);                                 // Sccaner class object
        float fValue1 = 0.0f, fValue2 = 0.0f ;                                  // to accept user input
        float fRet =0.0f;                                                       // to store the result
        
        System.out.println("Enter first number:");
        fValue1 = sobj.nextFloat();

        System.out.println("Enter Second number:");
        fValue2 = sobj.nextFloat();

        AdditionTwoNumber aobj = new AdditionTwoNumber(fValue1 , fValue2);      // creating class object

        fRet = aobj.Addition();                                                 // method call

        System.out.println("Addition of two Number is :"+fRet);


    } 
}   //End of main class

//////////////////////////////////////////////////////////////////////////////
//
//  Input1 : 10.5        Input2 : 3.2        Output : 13.7
//  Input1 : -10.5        Input2 : 3.2        Output : 13.7
//  Input1 : 10.5        Input2 : -3.2        Output : 13.7
//  Input1 : -10.5        Input2 : 3.2        Output : 13.7
//  Input1 : 10.5        Input2 : 0.0        Output : 10.5
//
//////////////////////////////////////////////////////////////////////////////
