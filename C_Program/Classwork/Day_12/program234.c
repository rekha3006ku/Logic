#include<stdio.h>

int CountSpace(char str[])
{
    int iCount = 0 ;
    while(*str != '\0')
    {
        if((*str ==' '))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0 ;
    
    printf("Enter String :");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountSpace(Arr);
    printf("total Whitespace are :%d\n",iRet);

    return 0;
}