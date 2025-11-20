#include<stdio.h>
#include<stdlib.h>

typedef int* IPTR ;

int FrequencyCalculate(int Arr[], int iSize)
{
    int iCnt = 0 ; 
    int iCount = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]== 11)
        {
            iCount++ ;
        }
    }
    return iCount ;
}

int main()
{
    int iCnt = 0 , iLength = 0 , iRet = 0;
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
    
    iRet = FrequencyCalculate(iPtr, iLength);
    printf("Frequency of 11 is : %d " , iRet);


    // Step3 : free the memory ;

    free(iPtr);

    return 0 ; 
}