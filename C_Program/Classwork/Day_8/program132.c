////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Average
//  Description :   it is used to return Average of elements of aaray
//  Input :         Integer
//  output :        Float
//  Author :        Rekha Shankarlal Kumawat
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////

float Average(int Arr[], int iSize)
{
    int iCnt = 0 , fAvg= 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        fAvg = fAvg+ Arr[iCnt];
    }
    return ((float)fAvg/(float)iSize);
}
///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////


int main()
{
    int iLength = 0 ;
    float fRet = 0;
    int*ptr = NULL ;
    int iCnt = 0 ;

    printf("Enter number of elements :");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));

    if( NULL == ptr )                       
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
///////////////////////////////////////////////////////////////////////////////
//
//  Input:1 2 3 4 5                  Output:3 
//  Input:4 6 2 8                    Output:5
//
////////////////////////////////////////////////////////////////////
