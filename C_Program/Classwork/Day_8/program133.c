#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0 , iLength = 0;
    int*iPtr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d" , &iLength);

    // Step : Allocate the memory
    iPtr = (int*)malloc(iLength * sizeof(int));

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
    // call to the function which cointains business logic
    // Fun(iPtr , iLength);

    // Step3 : free the memory ;

    free(iPtr);

    return 0 ; 
}