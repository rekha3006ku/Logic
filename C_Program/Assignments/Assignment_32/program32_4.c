///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              // for input output

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display the pattern of character
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          29/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iRow , int iCol)
{
    int iCnt1 = 0 ;
    int iCnt2 = 0 ;
    if(iRow != iCol)
        {
            printf("Invalid input");
            printf("Row number and column number should be same");
            return;
        }
    for(iCnt1 = iRow ; iCnt1 >= 1 ; iCnt1--)
    {
        
        for(iCnt2 = 1; iCnt2 <= iCol ; iCnt2++)
        {
            if(iCnt1 == iCnt2 || iCnt1 ==iRow  ||iCnt2== iCol|| iCnt1 == 1 || iCnt2 == 1 )
            {
                printf("*\t");
            }
            else if(iCnt1>iCnt2)
            {
                printf("@\t");
            }
            else
            {
                printf("#\t");
            }
            
        }
        printf("\n");
    }
}//end of the Display function

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    printf("Enter the number of rows:");
    scanf("%d", &iValue1);

    printf("Enter the number of columns:");
    scanf("%d", &iValue2);

    Display(iValue1 , iValue2);

    return 0 ;
}//end of main function

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:4    Input2:4   Output:*       *       *       *
//                                *       @       *       *
//                                *       *       #       *
//                                *       *       *       *         
//
//  Input1:6    Input2:6   Output:*       *       *       *       *       *
//                                *       @       @       @       *       *
//                                *       @       @       *       #       *
//                                *       @       *       #       #       *
//                                *       *       #       #       #       *
//                                *       *       *       *       *       *   
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////