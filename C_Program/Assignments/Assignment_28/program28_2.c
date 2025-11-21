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
        char character = 'A';                      // Taking first character of alphabet

        for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++)
        {
            if(iCnt1 % 2 == 0)
            {
                printf("%c\t", character+32);      // character+32 to convert the character to lowercase
                character++;
            }
            else
            {
                printf("%c\t", character);

                character++;                         //Incrementing character value that 
                                                     //it will print the next character
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
//  Input1:3    Input2:4   Output:A B C D 
//                                a b c d 
//                                A B C D 
//
//  Input1:4    Input2:5   Output:A B C D E
//                                a b c d e 
//                                A B C D E 
//                                a b c d e
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////