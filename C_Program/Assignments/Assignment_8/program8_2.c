///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   to print single digit number into words
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          20/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo == 0)
    {
        printf("Zero");

    }
    
    else
    {

        switch (iNo)
     {
         case 1:
            {
                printf("One");
                break;
            }
            
        case 2 :
                {
                    printf("Two");
                    break;
                }
        case 3 :
                {
                    printf("Three");
                    break;
                }
        case 4 :
                {
                    printf("four");
                    break;
                }
        case 5 :
                {
                    printf("Five");
                    break;
                }
        case 6 :
                {
                    printf("Six");
                    break;
                }
        case 7 :
                {
                    printf("Seven");
                    break;
                }
        case 8 :
                {
                    printf("Eight");
                    break;
                }
        case 9 :
                {
                    printf("Nine");
                    break;
                }


        default:
                {
                    printf("Invalid input ");
                    break;
                }
            
        
        }
    
    }
   
}// end of Display function 

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0 ;
    
    printf("Enter Sinle digit number :");
    scanf("%d ",&iValue);

    Display(iValue);

    return 0 ;
}// Enf of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:5              Output:Five
//  Input1:9              Output:Nine   
//  Input1:12             Output:Invalid Input
//
///////////////////////////////////////////////////////////////////////////////