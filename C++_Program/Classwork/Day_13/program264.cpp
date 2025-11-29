#include<iostream>
using namespace std;

int Maximum(int No1 , int No2)
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
    int iValue1 = 0 , iValue2 = 0 , iRet = 0;
    
    cout<<"Enter first number :" ;
    cin>>iValue1 ;

    cout<<"Enter Second number :" ;
    cin>>iValue2 ;

    iRet = Maximum(iValue1,iValue2);
    cout<<"Maximum: " <<iRet<<"\n" ;

    

    return 0 ;
}