
// OOP Approach (generic)

#include<iostream>
using namespace std;

template<class T>

class Arithematic
{
    public:
        T iNo1 ;
        T iNo2 ;

        Arithematic(T A , T B)
        {
            this->iNo1 = A;
            this->iNo2 = B;
        }
        T Addition()
        {
            T Ans = 0 ;
            Ans =this->iNo1 + this->iNo2 ;
            return Ans ; 
        }
        T Substraction()
        {
            T Ans = 0 ;
            Ans =this->iNo1 - this->iNo2 ;
            return Ans ; 
        } 

};

int main()
{

    Arithematic <int>aobj1(11,21);           
    Arithematic <double>aobj2(101.5,50.3);           

    cout<<"Addition :"<<aobj1.Addition()<<"\n";
    cout<<"Substraction :"<<aobj1.Substraction()<<"\n";

    cout<<"Addition :"<<aobj2.Addition()<<"\n";
    cout<<"Substraction :"<<aobj2.Substraction()<<"\n";

    return 0 ;
}