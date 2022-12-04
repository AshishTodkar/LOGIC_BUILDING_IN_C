#include<stdio.h>
#include<conio.h>

int LastChar(char *Str, char Ch)
{
    int Occ = 0, i = 0;

    while(*Str != '\0')
    {
        if( *Str == Ch )
        {
            Occ = i;
        }

        i++;
        *Str++;
    }

    if( Occ > 0 )
    {
        return Occ;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char Arr[20] , cValue;
    int iRet = 0;

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr);

    printf("\n\t Enter the character : ");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);

    printf("\n\t Last Occurence Of Given Character Is : %d",iRet);

    getch();
    return 0;
}
