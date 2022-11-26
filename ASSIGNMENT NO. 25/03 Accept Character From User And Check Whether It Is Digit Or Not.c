#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if( ch >= '0' && ch <= '9' )
    {
        return 1;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n\t Enter The Character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if( bRet == TRUE )
    {
        printf("\n\t It Is Digit.");
    }
    else
    {
        printf("\n\t It Is Not Digit.");
    }

    getch();
    return 0;
}
