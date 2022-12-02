#include<stdio.h>
#include<conio.h>

void DisplayDigit(char *Str)
{
    printf("\n\t Digits In Given String : ");

    while(*Str != '\0')
    {
        if( *Str >= '0' && *Str <= '9' )
        {
            printf("%c",*Str);
        }

        *Str++;
    }
}

int main()
{
    char Arr[20];

    printf("\n\t Enter A String => ");
    scanf("%[^\n]",&Arr);

    DisplayDigit(Arr);

    getch();
    return 0;
}
