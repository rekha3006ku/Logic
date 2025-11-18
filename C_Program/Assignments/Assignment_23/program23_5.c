//////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   // for input output
#include<stdlib.h>                                  // for malloc function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Product
//  Description :   return the product of all odd numbers
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int Product(int Arr[],int iSize )
{
    int iCnt = 0 ;
    int iProduct = 1;
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
            iProduct = iProduct*Arr[iCnt];  
        }
    }
   return iProduct;
}//end of the Product function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0;
    int iLength = 0;
    int iRet = 0 ;
    int*Ptr = NULL;

    printf("Enter the number of elements in Array : \n");
    scanf("%d" , &iLength);

    Ptr=(int*)malloc(iLength*sizeof(int));                  // dynamic memory allocation

    if(Ptr == NULL)
    {
        printf(" Memory allocation failed !!!!!");
    }

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]);
    }

    iRet = Product(Ptr , iLength );
    printf(" product of odd numbers : %d", iRet);

    free(Ptr);                                                  // memory deallocation

    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:15, 66, 3, 70, 10, 88      Output:product of odd numbers :45
//  Input1:6      Input2:44, 66, 72, 70, 10, 88     Output:product of odd numbers :0
//
//////////////////////////////////////////////////////////////////////////////////////////////