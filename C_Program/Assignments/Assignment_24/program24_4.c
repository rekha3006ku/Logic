//////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   // for input output
#include<stdlib.h>                                  // for malloc function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Digits
//  Description :   Display all such numbers which contains 3 digits in it
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          18/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[],int iSize )
{
    int iCnt = 0 ;
    int iDigit = 0;
    int iTemp  = 0 ;

    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        iTemp = Arr[iCnt] ;
        int iCount = 0 ;
        
        while(iTemp!=0)
        {
            iDigit = iTemp % 10;
            iTemp =  iTemp / 10;
            iCount++; 
        }
        if(iCount == 3)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
  
}//end of the Digits function

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

    Digits(Ptr , iLength );
    

    free(Ptr);                                                      // memory deallocation

    return 0 ;
}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:8225, 665, 3, 76, 953, 858     Output:665, 53, 858
//
///////////////////////////////////////////////////////////////////////////////////////////////