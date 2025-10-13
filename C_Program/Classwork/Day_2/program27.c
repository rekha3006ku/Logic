/*   
    Alogrithm
    START
        Accept first number input as iCount
        and Display Jay Ganesh on  screen 
        
    STOP
*/

///////////////////////////////////////////////////////////////////////////////
//
//  required Header files
//
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

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

void Display(int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        printf("Invalid input");
    }
    for(iCnt= 1; iCnt <= iFrequency ; iCnt++ )
    {
        printf("Jay Ganesh..\n");
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCount = 0;
    printf("Enter the frequency:");
    scanf("%d",&iCount);

    Display(iCount);
    return 0;
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
