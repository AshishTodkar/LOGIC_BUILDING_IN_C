#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *Str, char Ch)
{
    while(*Str != '\0')
    {
        if( *Str == Ch )
        {
            return 1;
        }

        *Str++;
    }
}

int main()
{
    char Arr[20] , cValue;
    BOOL bRet = FALSE;

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr);

    printf("\n\t Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("\n\t Given Character Is found.");
    }
    else
    {
        printf("\n\t Given Character Is not found.");
    }

    getch();
    return 0;
}
