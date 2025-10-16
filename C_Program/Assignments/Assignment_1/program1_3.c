// print 5 to 1 number on screen
#include<stdio.h>
int Display()
{
    int iCnt = 0;
     iCnt = 5;
    while(iCnt != 0)
    {
        printf("%d\t", iCnt);
        iCnt--;
    }

}
int main()
{
    Display();
    return 0;


}
//////////////////////////////////////////////////////////////////
// output: 5 4 3 2 1 
//////////////////////////////////////////////////////////////////
