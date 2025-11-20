#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iSize)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\t", Arr[iCnt]);
    }
}

float Average(int Arr[], int iSize)
{
    int iCnt = 0 , fAvg= 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        fAvg = fAvg+ Arr[iCnt];
    }
    return ((float)fAvg/(float)iSize);
}

int main()
{
    int iLength = 0 ;
    float fRet = 0;
    int*ptr = NULL ;
    int iCnt = 0 ;

    printf("Enter number of elements :");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));

    if( NULL == ptr )           // industial way of coding              
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
    

    fRet = Average(ptr , iLength);
    printf("\nAverage is :%f\n ", fRet );

    free(ptr);

    return 0 ;
}