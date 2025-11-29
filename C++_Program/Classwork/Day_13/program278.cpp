
// OOP Approach (spacific)

#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iNo1 ;
        int iNo2 ;

        Arithematic(int A , int B)
        {
            this->iNo1 = A;
            this->iNo2 = B;
        }
        int Addition()
        {
            int iAns = 0 ;
            iAns =this->iNo1 + this->iNo2 ;
            return iAns ; 
        }
        int Substraction()
        {
            int iAns = 0 ;
            iAns =this->iNo1 - this->iNo2 ;
            return iAns ; 
        } 

};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0 ;

    cout<<"Enter first Number:"<<"\n";
    cin>>iValue1;

    cout<<"Enter Second Number:"<<"\n";
    cin>>iValue2;

    Arithematic aobj1(iValue1, iValue2);
    Arithematic aobj2(iValue1, iValue2);

    cout<<"Addition :"<<aobj1.Addition()<<"\n";
    cout<<"Substraction :"<<aobj1.Substraction()<<"\n";

    cout<<"Addition :"<<aobj2.Addition()<<"\n";
    cout<<"Substraction :"<<aobj2.Substraction()<<"\n";

    return 0 ;
}