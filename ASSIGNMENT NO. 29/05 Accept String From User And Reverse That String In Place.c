#include<stdio.h>
#include<conio.h>

void StrRevX(char *Str)
{
    printf("\n\t Modified String Is : ");

    while(*Str != '\0')
    {
        *Str++;
    }

    *Str--;

    while(*Str > 0)
    {
        printf("%c",*Str);
        *Str--;
    }
}

int main()
{
    char Arr[20];

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr);

    StrRevX(Arr);

    getch();
    return 0;
}
