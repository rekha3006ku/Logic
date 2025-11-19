//////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                           // for input output
#include<stdbool.h>                                         // for bool datatype

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Description :   Checks Character ie vowel or not
//  Input :         Integer
//  output :        Bool
//  Author :        Rekha Shankarlal Kumawat
//  Date :          16/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

bool CheckVowel(char cValue)
{
    if ( cValue == 'a' || cValue == 'A'||
         cValue == 'e' || cValue == 'E'|| 
         cValue == 'i' || cValue == 'I'||
         cValue == 'o' || cValue == 'O'||
         cValue == 'u' || cValue == 'U'
        )  

       {
        return true;
       } 
    else
    {
        return false;
    }   
}//end of the CheckVowel function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet   ='\0';

    printf("Enter Your Character\n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if (bRet == True)
    {
        printf("It is a Vowel");

    }
    else
    {
       printf("It is not a Vowel");
    }
    
    return 0;

}//end of main function

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:'A'    Output:It is a Vowel
//  Input1:'B'    Output:It is not a Vowel
//
///////////////////////////////////////////////////////////////////////////////////////////////