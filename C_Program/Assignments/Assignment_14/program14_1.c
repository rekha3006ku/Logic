///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description :   to dispaly digit of number
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit= iNo% 10 ;
        iNo = iNo / 10;

        printf("%d\n",iDigit);
    }
    
}// end of DisplayDigit function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0 ;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    
    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:2395                 Output:Sum of even number :5
//                                                         9
//                                                         3
//                                                         2
// Input1:1018                 Output:Sum of even number : 8
//                                                         1
//                                                         0
//                                                         1
// Input1:-1018                Output:Sum of even number : 8
//                                                         1
//                                                         0
//                                                         1
// Input1:9000                 Output:Sum of even number : 0
//                                                         0
//                                                         0
//                                                         9
//
///////////////////////////////////////////////////////////////////////////////