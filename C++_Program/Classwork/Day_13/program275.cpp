#include<iostream>
using namespace std;

template <class T , clas W>

void Display(T No1 ,W No2)
{
    cout<<No1<<"\n";
    cout<<No2<<"\n";
}

int main()
{
   int iValue =11 ;
   double dvalue  33.23232;
   Display(iValue ,dvalue);
    return 0 ;
}