#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if( ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*' )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n\t Enter A Character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if( bRet == TRUE )
    {
        printf("\n\t It is special Character.");
    }
    else
    {
        printf("\n\t It is not a special Character.");
    }

    getch();
    return 0;
}
