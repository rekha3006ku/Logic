////////////////////////////////////////////////////////////////////////////////
//
//required  package
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description :   it is used to Count even number of elements of aaray
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          13/11/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0 , iCount = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet = CountEven(ptr , iLength);
    printf("Even Count :%d\n ", iRet );

    free(ptr);

    return 0 ;
}
///////////////////////////////////////////////////////////////////////////////
//
//  Input:1 2 3 4                  Output:2 
//  Input:1 6 2 8                  Output:3
//
////////////////////////////////////////////////////////////////////
