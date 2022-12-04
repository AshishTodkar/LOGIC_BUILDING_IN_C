#include<stdio.h>
#include<conio.h>

int CountChar(char *Str, char Ch)
{
    int Cnt = 0;

    while(*Str != '\0')
    {
        if( *Str == Ch )
        {
            Cnt++;
        }

        *Str++;
    }

    return Cnt;
}

int main()
{
    char Arr[20] , cValue;
    int iRet = 0;

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr);

    printf("\n\t Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("\n\t Count Of Given Character Is : %d",iRet);

    getch();
    return 0;
}
