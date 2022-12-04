#include<stdio.h>
#include<conio.h>

int FirstChar(char *Str, char Ch)
{
    int Occ = 0;

    while(*Str != '\0')
    {
        if( *Str == Ch )
        {
            return Occ;
        }

        Occ++;
        *Str++;
    }

    return -1;
}

int main()
{
    char Arr[20] , cValue;
    int iRet = 0;

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr);

    printf("\n\t Enter the character : ");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);

    printf("\n\t First Occurence Of Given Character Is : %d",iRet);

    getch();
    return 0;
}
