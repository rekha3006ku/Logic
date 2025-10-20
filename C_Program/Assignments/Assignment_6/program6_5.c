///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   percentage of marks obtained
//  Input :         float
//  output :        float
//  Author :        Rekha Shankarlal Kumawat
//  Date :          19/10/2025
//
///////////////////////////////////////////////////////////////////////////////

float Percentage(float fNo1 , float fNo2)
{
    float percentage = 0.0;
    percentage = (fNo2 /fNo1)*100 ;

    return percentage ;

}// end of Percentage function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fRet = 0.0;

    printf("Enter the Total Marks :");
    scanf("%f",&fValue1);

    printf("Enter the Obtained  Marks :");
    scanf("%f",&fValue2);

    fRet = Percentage(fValue1 , fValue2);
    printf("percentage  is %f %",fRet);

    return 0 ;
}// End of main function

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:400    Input2:200    Output:percentage is 50% 
//  Input1:400    Input2:400    Output:percentage is 100% 
//  Input1:400    Input2:100    Output:percentage is 25% 
//
///////////////////////////////////////////////////////////////////////////////