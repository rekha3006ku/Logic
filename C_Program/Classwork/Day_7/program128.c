////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Summation
//  Description :   it is used to summation of elements of aaray
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          13/11/2025
//
///////////////////////////////////////////////////////////////////////////////

int Summation(int Arr[], int iSize)
{
    int iCnt = 0 , iSum = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//Entry point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0 , iRet = 0;
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
    iRet = Summation(ptr , iLength);

    printf("Addition is :%d\n ", iRet );
    free(ptr);

    return 0 ;
}
///////////////////////////////////////////////////////////////////////////////
//
//  Input:1 2 3 4                  Output:10 
//  Input:1 1 2 3                  Output:7
//
////////////////////////////////////////////////////////////////////
