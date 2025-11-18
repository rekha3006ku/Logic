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
//  Description :   Return the frequency of the number which is searched
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength , int iNo)
{
    int iCnt = 0;
    int iCount= 0  ;

    for(iCnt = 0 ;iCnt < iLength ; iCnt++)
    {
        
        if((Arr[iCnt]) == iNo)
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

    int iSize = 0, iValue = 0 ;
    int iCnt = 0 , iRet = 0;

    int*p =NULL ;

    printf("Enter number of Elemnets : ");
    scanf("%d ", &iSize);

    printf("Enter number to br searched : ");
    scanf("%d ", &iValue);

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

    iRet = Frequency(p , iSize , iValue);
    printf("%d",iRet);

    free(p);                                        // memory deallocation
    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:85, 11, 3, 15, 11, 111    Input3:12        Output:0
//  Input1:6      Input2:85, 66, 3, 66, 93, 88     Input3:66        Output:0
//
//////////////////////////////////////////////////////////////////////////////////////////////