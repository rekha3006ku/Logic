
////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : LinearSearch
//  Description :   it is used to search  elements in aaray
//  Input :         Integer
//  output :        Boolean
//  Author :        Rekha Shankarlal Kumawat
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////

typedef int* IPTR ;

//  time complexity is less than O(N)
bool LinearSearch(int Arr[], int iSize , int iNo)
{
    int iCnt = 0 ;
    bool bFlag = false ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
         if(Arr[iCnt]== iNo)
        {
            bFlag = true ;
            break;
        }
    }
    
    return bFlag ;
    
}
///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0 , iLength = 0 ,  iValue = 0 ;
    bool bRet = false ;
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

    printf("Enter the number to Search :\n");
    scanf("%d" , &iValue);

    // Step2 : use the memory
    
    bRet = LinearSearch(iPtr, iLength  , iValue);
    if(bRet == true)
    {
        printf("%d is present in data ", iValue);
    }
    else
    {
        printf("%d is  not present in data ", iValue);   
    }

    // Step3 : free the memory ;

    free(iPtr);

    return 0 ; 
}
///////////////////////////////////////////////////////////////////////////////
//
//  Input:1 2 3 2         input: 2         Output:2 is present in data 
//  Input:1 1 6 1         input:1          Output:1 is present in data
//
//////////////////////////////////////////////////////////////////////////////

