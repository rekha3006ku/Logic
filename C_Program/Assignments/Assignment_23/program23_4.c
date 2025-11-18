//////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   // for input output
#include<stdlib.h>                                  // for malloc function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Range
//  Description :   display all the numbers of that range
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[],int iSize , int iNo1 , int iNo2)
{
    int iCnt = 0 ;
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iNo1 && Arr[iCnt] < iNo2)
        {
            printf("%d\n" , Arr[iCnt]);   
        }
    }
   
}//end of the Range function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0;
    int iLength = 0;
    int iValue1 = 0;
    int iValue2 = 0;
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

    printf("Enter the Starting point : \n");
    scanf("%d" , &iValue1);

    printf("Enter the Ending point : \n");
    scanf("%d" , &iValue2);

    Range(Ptr , iLength , iValue1 , iValue2);

    free(Ptr);                                              // memory deallocation

    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:85, 11, 13, 15, 12, 111    Input3:12    Input4:15      Output:13
//  Input1:6      Input2:85, 66, 3, 66, 93, 88      Input3:66    Input4:88      Output:85
//
//////////////////////////////////////////////////////////////////////////////////////////////