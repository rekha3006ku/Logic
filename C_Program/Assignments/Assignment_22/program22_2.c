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
//  Description :   return the difference between the frequency of even and odd number
//  Input :         Integer
//  output :        Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCountEven= 0 , iCountOdd = 0 ;

    for(iCnt = 0 ;iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt]%2 )== 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    
    
    return (iCountEven - iCountOdd);

}//end of the Frequency function

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

    p = (int*)malloc(iSize*sizeof(int));               //dynamic memory allocation

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

    iRet = Frequency(p, iSize);
    printf("Frequency is: %d\n" , iRet);

    free(p);                                        // memory deallocation

    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:7      Input2:85, 66, 3, 80, 93, 88, 90           Output:Frequency is:1
//
//////////////////////////////////////////////////////////////////////////////////////////////