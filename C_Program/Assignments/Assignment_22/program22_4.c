//////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   // for input output
#include<stdlib.h>                                  // for malloc function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description :   Count the frquency of 11 from the numbers
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount= 0  ;

    for(iCnt = 0 ;iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt])== 11)
        {
            iCount++;
        }
        
    }
    return iCount;
    
}//end of the Frequency function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 ;
    int iCnt = 0 , iRet = 0;

    int*p =NULL ;

    printf("Enter number of Elemnets : ");
    scanf("%d ", &iSize);

    p = (int*)malloc(iSize*sizeof(int));                // dynamic memory allocation

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

    iRet = Frequency(p , iSize);
    printf("%d",iRet);
    
    free(p);                                        // memory deallocation
    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:85, 66, 11, 80, 11, 111           Output:2
//  Input1:6      Input2:85, 66, 3, 80, 15, 111            Output:0
//
//////////////////////////////////////////////////////////////////////////////////////////////