#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iSize)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d ", Arr[iCnt]);
    }
}

int main()
{
    int iLength = 0 ;
    int*ptr = NULL ;
    int iCnt = 0 ;

    printf("Enter number of elements :");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));

    if( NULL = ptr )           // major issue (Error)           
    {
        printf("unable to allocate memory\n");
        return -1 ;
    }

    printf("Enter the elements : \t");

    for(iCnt = 0 ; iCnt <iLength ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr , iLength);

    free(ptr);

    return 0 ;
}