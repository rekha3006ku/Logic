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

    printf("Enter character to be searched:");
    scanf(" %c", &cValue);          // space before formate spacifir  and work for all operating system

    iRet = CountOccurance(Arr , cValue);
    printf("Number of occurences are : %d ",iRet);

    return 0;
}