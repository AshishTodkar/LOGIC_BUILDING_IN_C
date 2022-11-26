#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if( ch >= 'A' && ch <= 'Z' )
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

    bRet = ChkCapital(cValue);

    if( bRet == TRUE )
    {
        printf("\n\t It Is Capital Character.");
    }
    else
    {
        printf("\n\t It Is Not Capital Character.");
    }

    getch();
    return 0;
}
