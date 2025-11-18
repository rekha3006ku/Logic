//////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   // for input output
#include<stdlib.h>                                  // for malloc function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : LastOcc
//  Description :   return the index of last occurence of that number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[],int iSize , int iNo)
{
    int iCnt = 0 ;
    int iIndex = 0;
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }
        else
        {
            iIndex= -1 ;
        }
    }
    
   return iIndex ;
}//end of the LastOcc function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0;
    int iLength = 0;
    int iValue = 0;
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

    printf("Enter the to Search : \n");
    scanf("%d" , &iValue);

    iRet = LastOcc(Ptr , iLength , iValue);
    printf("%d last Occured at %d index ", iValue , iRet);

    free(Ptr);                                              // memory deallocation

    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:85, 11, 3, 15, 12, 111    Input3:12        Output:4
//  Input1:6      Input2:85, 66, 3, 66, 93, 88     Input3:66        Output:3
//
//////////////////////////////////////////////////////////////////////////////////////////////