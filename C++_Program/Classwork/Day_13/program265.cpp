#include<iostream>
using namespace std;

double Maximum(double No1 , double No2)
{
    if(No1 > No2)
    {
        return No1 ;
    }
    else
    {
        return No2 ;
    }
}
int main()
{
    double dValue1 = 0.0 , dValue2 = 0.0 , dRet = 0;
    
    cout<<"Enter first number :" ;
    cin>>dValue1 ;

    cout<<"Enter Second number :" ;
    cin>>dValue2 ;

    dRet = Maximum(iValue1,iValue2);
    cout<<"Maximum: " <<dRet<<"\n" ;

    

    return 0 ;
}