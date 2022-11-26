#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if( ( ch >= 'A' && ch <= 'Z' ) || ( ch >= 'a' && ch <= 'z' ) )
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

    bRet = ChkAlpha(cValue);

    if( bRet == TRUE )
    {
        printf("\n\t It Is Character.");
    }
    else
    {
        printf("\n\t It Is Not Character.");
    }

    getch();
    return 0;
}
