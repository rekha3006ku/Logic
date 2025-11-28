/*
  Input :  Enter source  sting :riddhi
           Enter Destination  sting :hello
  Output : Updated string is : helloriddhi

*/
#include<stdio.h>

void strcatX(char*src , char*dest)
{
    while(*dest != '\0')
    {
        *dest++;
    }
    while(*src != '\0')
    {
        *dest = *src;
        *src++;
        *dest++;
    }
    *dest = '\0';                   
}

int main()
{
    char Arr[50] = {'\0'} ;
    char Brr[50] = {'\0'} ;

    printf("Enter source  sting :");
    scanf("%[^'\n']s", Arr);

    fflush(stdin);

    printf("Enter Destination  sting :");
    scanf("%[^'\n']s", Brr);

    strcatX(Arr, Brr);

    printf("Updated string is : %s\n", Brr);

    return 0 ;
}