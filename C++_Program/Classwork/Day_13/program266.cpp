#include<iostream>
using namespace std;

template <class T>

T Maximum(T No1 , T No2)
{
    if( No1 > No2)
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
    int iValue1 = 10 , iValue2 =11 , iRet = 0;
    float fValue1 = 10.0f , fValue2 =11.0f , fRet = 0.0f;
    double dValue1 = 10.0 , dValue2 =11.0 , dRet = 0.0;

    iRet = Maximum(iValue1,iValue2);
    cout<<"Maximum : " <<iRet<<"\n" ;

    fRet = Maximum(fValue1,fValue2);
    cout<<"Maximum : " <<fRet<<"\n" ;

    dRet = Maximum(dValue1,dValue2);
    cout<<"Maximum : " <<dRet<<"\n" ;

    return 0 ;
}