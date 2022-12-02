#include<stdio.h>
#include<conio.h>

void Strtogglex(char *Str)
{
    printf("\n\t Modified String Is : ");

    while(*Str != '\0')
    {
        if( *Str >= 'a' && *Str <= 'z' )
        {
            *Str -= 32;
        }
        else if( *Str >= 'A' && *Str <= 'Z' )
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

    Strtogglex(Arr);

    getch();
    return 0;
}
