///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description :   Area of Rectangle
//  Input :         float
//  output :        double
//  Author :        Rekha Shankarlal Kumawat
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth , float fHeight)
{
    float fArea = 0.0;
    fArea = fWidth*fHeight ;

    return fArea ;

}//end of RectArea function

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0 , fValue2 = 0.0 ;
    double dRet = 0.0 ;

    printf("Enter Width :");
    scanf("%f",&fValue1);

    printf("Enter Height :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2 );
    printf("Area of Rectangle is : %lf ", dRet);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Input1:5.3      Input2:9.78        Output:Area of Rectangle is 88.2026
//  Input1:4.3      Input2:3.4         Output:Area of Rectangle is 14.620001
//  Input1:4.1      Input2:9.6        Output:Area of Rectangle is 39.360001
//
///////////////////////////////////////////////////////////////////////////////