#include<stdio.h>
#include<conio.h>

void Reverse(char *Str)
{
    while(*Str != '\0')
    {
        *Str++;
    }

    *Str--;

    printf("\n\t");

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

    Reverse(Arr);

    getch();
    return 0;
}
