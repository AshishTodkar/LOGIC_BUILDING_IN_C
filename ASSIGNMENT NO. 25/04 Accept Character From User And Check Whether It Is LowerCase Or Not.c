#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkLowCase(char ch)
{
    if( ch >= 'a' && ch <= 'z' )
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

    bRet = ChkLowCase(cValue);

    if( bRet == TRUE )
    {
        printf("\n\t It Is LowerCase Character.");
    }
    else
    {
        printf("\n\t It Is Not LowerCase Character.");
    }

    getch();
    return 0;
}
