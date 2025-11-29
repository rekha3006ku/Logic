#include<iostream>
using namespace std;

template <class T>

T Maximum(T No1 , T No2 , T No3)
{
    if( No1 > No2 && No1 > No3)
    {
        return No1 ;
    }
    else if(No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3 ;
    }
}
int main()
{
    int iValue1 = 10 , iValue2 =11 ,  iValue3 = 21 , iRet = 0;
    float fValue1 = 10.0f , fValue2 =11.0f , fValue3 = 21.0f , fRet = 0.0f;
    double dValue1 = 10.0 , dValue2 =11.0 , dValue3 = 21.0 ,  dRet = 0.0;

    iRet = Maximum(iValue1,iValue2 , iValue3);
    cout<<"Maximum : " <<iRet<<"\n" ;

    fRet = Maximum(fValue1,fValue2 , fValue3);
    cout<<"Maximum : " <<fRet<<"\n" ;

    dRet = Maximum(dValue1,dValue2, dValue3);
    cout<<"Maximum : " <<dRet<<"\n" ;

    return 0 ;
}