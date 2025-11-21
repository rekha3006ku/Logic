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
//  Date :          21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iRow , int iCol)
{
    int iCnt1 = 0 ;
    int iCnt2 = 0 ;
    
    for(iCnt1 = 1 ; iCnt1 <= iRow ; iCnt1++)
    {
        int iOdd = 1 ;
        for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++)
        {
            if((iCnt1)% 2 == 1)
            {
                printf("%d\t", (2*iCnt2));
            }
            else
            {
                printf("%d\t", iOdd);
                iOdd = iOdd+2;
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
//  Input1:4    Input2:5   Output:2  4  6  8  10
//                                1  3   5  7  9  
//                                2  4  6  8  10
//                                1  3   5  7  9 
//
//  Input1:3    Input2:3   Output:2  4  6
//                                1  3  5
//                                2  4  6
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////