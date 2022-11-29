#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    printf("\n\t Decimal : %d \n\n\t Octal : %o \n\n\t Hexadecimal : %x ",ch,ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("\n\t Enter A Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    getch();
    return 0;
}
