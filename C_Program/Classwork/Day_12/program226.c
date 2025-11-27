#include<stdio.h>

int CountOccurance(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ch))
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
    int iRet = 0;
    char cValue ='\0';

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);          // not applicable on every operation system

    printf("Enter character to be searched:");
    scanf(" %c", &cValue);          

    iRet = CountOccurance(Arr , cValue);
    printf("Number of occurences are : %d ",iRet);

    return 0;
}