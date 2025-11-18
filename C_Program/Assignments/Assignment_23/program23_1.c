//////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   // for input output
#include<stdlib.h>                                  // for malloc function
#include<stdbool.h>                                 // for bool datatype

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   Check wheather the searched number is present or not 
//  Input :         Integer
//  output :        Bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////


bool Check(int Arr[],int iSize , int iNo)
{
    int iCnt = 0 ;
    int iCount = 0;
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
            break;
        }
    }

    if(iCount > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}//end of the Check function

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
    bool bRet = false ;
    int*Ptr = NULL;

    printf("Enter the number of elements in Array : \n");
    scanf("%d" , &iLength);

    Ptr=(int*)malloc(iLength*sizeof(int));              // dynaimc memory allocationn

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

    bRet = Check(Ptr , iLength , iValue);

    if(bRet == true)
    {
        printf(" %d is present in Data ", iValue);
    }
    else
    {
        printf(" %d is not present in Data ", iValue);   
    }

    free(Ptr);                                        // memory deallocation

    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Input1:6  Input2:85, 11, 3, 15, 11, 111   Input3:12   Output:12 is not present in Data
// Input1:6  Input2:85, 66, 3, 66, 93, 88    Input3:66   Output:66 is present in Data 
//
//////////////////////////////////////////////////////////////////////////////////////////////