#include<stdio.h>
#include<conio.h>

int CountSpaces(char *Str)
{
    int Cnt = 0;

    while(*Str != '\0')
    {
        if( *Str == ' ' )
        {
            Cnt++;
        }

        *Str++;
    }

    return Cnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr);

    iRet = CountSpaces(Arr);

    printf("\n\t White Spaces In Given String Are : %d.",iRet);

    getch();
    return 0;
}
