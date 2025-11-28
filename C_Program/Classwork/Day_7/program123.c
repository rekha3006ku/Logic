////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   it is used to Display elements of aaray
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          13/11/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int Arr[] , int iSize)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d ", Arr[iCnt]);
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0 ;
    int*ptr = NULL ;
    int iCnt = 0 ;

    printf("Enter number of elements :");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));        //dynamic memory allocation

    printf("Enter the elements : \t");

    for(iCnt = 0 ; iCnt <iLength ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr , iLength);

    free(ptr);                                    // memory deallocation

    return 0 ;

}
///////////////////////////////////////////////////////////////////////////////
//
//  Input:1 2 3 4                  Output:1 2 3 4 
//  Input:1 1 2 3                  Output:1 1 2 3 
//
////////////////////////////////////////////////////////////////////
