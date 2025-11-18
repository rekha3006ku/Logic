//////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   // for input output
#include<stdlib.h>                                  // for malloc function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DigitsSum
//  Description :   Display summation od digits of each number
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[],int iSize )
{
    int iCnt = 0 ;
    int iDigit = 0;

    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {   
        int iSum  = 0 ;
        
        while(Arr[iCnt]!=0)
        {
            iDigit = Arr[iCnt] % 10;
            Arr[iCnt] =  Arr[iCnt] / 10;
            iSum = iSum + iDigit ; 
        }
        printf("%d\n ", iSum);
    }
  
}//end of the DigitsSum function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0;
    int iLength = 0;
    int*Ptr = NULL;

    printf("Enter the number of elements in Array : \n");
    scanf("%d" , &iLength);

    Ptr=(int*)malloc(iLength*sizeof(int));                      // dynamic memory allocation

    if(Ptr == NULL)
    {
        printf(" Memory allocation failed !!!!!");
    }

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]);
    }

    DigitsSum(Ptr , iLength );


    free(Ptr);                                                  // memory deallocation

    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:8225, 665, 3, 76, 953, 858     Output:17, 17, 3, 13, 17,21 
//
///////////////////////////////////////////////////////////////////////////////////////////////