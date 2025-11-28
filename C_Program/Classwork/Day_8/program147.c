
////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Minimum
//  Description :   it is used to search Minimum elements in aaray
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////

typedef int* IPTR ;

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0 ;
    int iMin = 0;           


    for(iMin = Arr[0] ,iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////


int main()
{
    int iCnt = 0 , iLength = 0  , iRet = 0 ;
    IPTR iPtr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d" , &iLength);

    // Step : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1 ;
    }
    
    printf("Enter the elements: ");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d" , &iPtr[iCnt]);
    }


    // Step2 : use the memory
    
    iRet = Minimum(iPtr, iLength);
    printf("Minimum number is : %d\n ", iRet);

    // Step3 : free the memory ;

    free(iPtr);

    return 0 ; 
}///////////////////////////////////////////////////////////////////////////////
//
//  Input:1 2 3 2         input: 2         Output:Minimum number is :1 
//  Input:1 1 6 1         input:1          Output:Minimum number is :1
//
//////////////////////////////////////////////////////////////////////////////
