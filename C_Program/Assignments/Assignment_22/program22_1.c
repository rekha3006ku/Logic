//////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   // for input output
#include<stdlib.h>                                  // for malloc function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description :   to count Even number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCountEven= 0;

    for(iCnt = 0 ;iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt]%2 )== 0)
        {
            iCountEven++;
        }
    }
    return iCountEven ;

}//end of the CountEven function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0 ;
    int iCnt = 0;
    int iRet = 0;

    int*p =NULL ;

    printf("Enter number of Elemnets : ");
    scanf("%d ", &iSize);

    p = (int*)malloc(iSize*sizeof(int));           // dynamic memory allocation

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

    iRet = CountEven(p, iSize);
    printf("Even number are : %d\n" , iRet);

    free(p);                                        // memory deallocation

    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:85, 66, 3, 80, 93, 88           Output:Even number are :3
//
//////////////////////////////////////////////////////////////////////////////////////////////