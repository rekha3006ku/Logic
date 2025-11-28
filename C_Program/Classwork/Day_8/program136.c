////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FrequencyCalculate
//  Description :   it is used to Count frequency  of elements of aaray
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////

typedef int* IPTR ;

int FrequencyCalculate(int Arr[], int iSize , int iNo)
{
    int iCnt = 0 ; 
    int iCount = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            iCount++ ;
        }
    }
    return iCount ;
}
///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////


int main()
{
    int iCnt = 0 , iLength = 0 , iRet = 0 , iValue = 0 ;
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

    printf("Enter the number to calculate the frequency:\n");
    scanf("%d" , &iValue);

    // Step2 : use the memory
    
    iRet = FrequencyCalculate(iPtr, iLength  , iValue);
    printf("Frequency of %d is : %d " , iValue , iRet);


    // Step3 : free the memory ;

    free(iPtr);

    return 0 ; 
}
///////////////////////////////////////////////////////////////////////////////
//
//  Input:1 2 3 2                  Output:2 
//  Input:1 1 6 1                  Output:3
//
////////////////////////////////////////////////////////////////////
