#include<stdio.h>
#include<conio.h>

void Strlwrx(char *Str)
{
    printf("\n\t Modified String Is : ");

    while(*Str != '\0')
    {
        if( *Str >= 'A' && *Str <= 'Z' )
        {
            *Str += 32;
        }

        printf("%c",*Str);

        *Str++;
    }
}

int main()
{
    char Arr[20];

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr);

    Strlwrx(Arr);

    getch();
    return 0;
}
