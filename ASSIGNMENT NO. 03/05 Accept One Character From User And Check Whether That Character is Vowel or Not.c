#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'a' || cValue == 'E' || cValue == 'e' || cValue == 'I' || cValue == 'i' || cValue == 'O' || cValue == 'o' || cValue == 'U' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n Enter A Character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("\n It Is A Vowel.");
    }
    else
    {
        printf("\n It Is Not A Vowel.");
    }

    getch();
    return 0;
}
