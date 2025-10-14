/*   
    Alogrithm
    START
        Accept first number input as iCount
        and Display Jay Ganesh on  screen 
        
    STOP
*/

///////////////////////////////////////////////////////////////////////////////
//
//  required Header files
//
//////////////////////////////////////////////////////////////////////////////
#include<iostream>
 using namespace std; 

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : it to Displat the String Jay Ganesh
//  Input :         Integer
//  output :        void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          10/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        cout<<"Invalid input"<<"\n";
    }
    for(iCnt= 1; iCnt <= iFrequency ; iCnt++ )
    {
        cout<<"Jay Ganesh.."<<"\n";
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCount = 0;
    cout<<"Enter the frequency:"<<"\n";
    cin>>iCount;

    Display(iCount);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Input:2                 Output:Jay Ganesh
//                                 Jay Ganesh
//  Input:3                 Output: Jay Ganesh
//                                  Jay Ganesh
//                                  Jay Ganesh
//
///////////////////////////////////////////////////////////////////////////////