//////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              // for input output
#include<stdlib.h>                                             // for malloc function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   return the difference between summation of even and odd numbers
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[],int iSize )
{
    int iCnt = 0 ;
    int iEvenSum = 0;
    int iOddSum = 0 ;
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {   
       if(Arr[iCnt]%2 == 0)
       {
        iEvenSum = iEvenSum + Arr[iCnt];
       }
       else
       {
        iOddSum = iOddSum + Arr[iCnt];
       }
    }
    return (iEvenSum - iOddSum);

}//end of the Difference function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0;
    int iLength = 0;
    int iRet = 0; 
    int*Ptr = NULL;

    printf("Enter the number of elements in Array : \n");
    scanf("%d" , &iLength);

    Ptr=(int*)malloc(iLength*sizeof(int));                          // dynamic memory allocation

    if(Ptr == NULL)
    {
        printf(" Memory allocation failed !!!!!");
    }

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]);
    }

    iRet = Difference(Ptr , iLength );
    printf("Result is :%d", iRet );

    free(Ptr);                                                  // memory deallocation

    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:85, 66, 3, 80, 93, 88     Output:Result is :53
//
///////////////////////////////////////////////////////////////////////////////////////////////