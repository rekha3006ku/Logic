#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0 , iFrequency = 0;

    if(iNo <0)
    {
        iNo = -iNo ;
    }
    for(iCnt = 2 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iFrequency++;
            break;                      //optimization 
        }
    }
    if(iFrequency == 0)                 // No factor
    {
        return true;
    }
    else
    {
        return false ;                  // atleast no factor
    }
    
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    
    if(bRet == true)
    {
        printf("%d is a prime number ", iValue);
    }
    else
    {
        printf("%d is not a prime number ", iValue);
    }
    

    return 0;
}

/* time complexity for prime is O(N/2)
 time complexity for non prime is 1 or 
 */