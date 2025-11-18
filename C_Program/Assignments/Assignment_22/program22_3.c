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
//  Function Name : Count
//  Description :   Check wheather the numbers contains 11 or not
//  Input :         Integer
//  output :        Bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

bool Count(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount= 0  ;

    for(iCnt = 0 ;iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt])== 11)
        {
            iCount++;
            break;
        }
        
    }
    if(iCount >=1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
    
}//end of the Count function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 ;
    int iCnt = 0;
    bool bRet = false;

    int*p =NULL ;

    printf("Enter number of Elemnets : ");
    scanf("%d ", &iSize);

    p = (int*)malloc(iSize*sizeof(int));                    // dynamic memory allocation

    if(p == NULL)
    {
        printf("memory aloocation failed!!!!!");
        return -1 ;

    }
    printf("Enter the elements:\n");
    for(iCnt = 0 ;iCnt < iSize ; iCnt++)
    {
        scanf("%d ", &p[iCnt]);
    }
    bRet = Count(p , iSize);
    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(p);                                        // memory deallocation
    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:85, 66, 11, 80, 93, 88           Output:11 is present
//
//////////////////////////////////////////////////////////////////////////////////////////////