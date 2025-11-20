#include<stdio.h>
#include<stdlib.h>

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